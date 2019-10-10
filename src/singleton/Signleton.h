#ifndef SINGLETON_H_
#define SINGLETON_H_

#include <iostream>
#include <mutex>

// 饿汉模式，局部静态变量：获取时一定是初始化过的。线程安全
class HungrySingleton {
 private:
  //   static HungrySingleton unique_instance_;
  HungrySingleton() {
    std::cout << "HungrySingleton instance is created.\n";
  }
  HungrySingleton(const HungrySingleton &) {}
  HungrySingleton &operator=(const HungrySingleton &) = delete;

 public:
  virtual ~HungrySingleton() {
    std::cout << "HungrySingleton instance is destroyed.\n";
  }

  static HungrySingleton *Instance() {
    // 局部静态变量
    // 如果当变量在初始化的时候，并发同时进入声明语句，并发线程将会阻塞等待初始化结束。
    static HungrySingleton unique_instance_;
    return &unique_instance_;
  }

  //   static HungrySingleton &Instance() {
  //     // 局部静态变量
  //     std::cout << "Unique instance is created.\n";
  //     static HungrySingleton unique_instance_;
  //     return unique_instance_;
  //   }
};

// 懒汉模式，需要的时候创建（分配空间）
// 线程不安全：一个线程未完成new的操作，另一个线程访问到Instance。
// 内存泄漏：没有析构
class IdlerSingleton {
 private:
  static IdlerSingleton *unique_instance_;
  IdlerSingleton() {
    std::cout << "IdlerSingleton instance is created.\n";
  }
  IdlerSingleton(const IdlerSingleton &) {}
  IdlerSingleton &operator=(const IdlerSingleton &) = delete;

 public:
  virtual ~IdlerSingleton() {
    std::cout << "IdlerSingleton instance is destroyed.\n";
  }

  static IdlerSingleton *Instance() {
    if (unique_instance_ == nullptr) {
      unique_instance_ = new IdlerSingleton();
    }
    return unique_instance_;
  }
};

IdlerSingleton *IdlerSingleton::unique_instance_ = nullptr;

// 懒汉模式，线程安全
// 上述两种模式，如果多线程，同时调用
class ThreadSafeSingleton {
 private:
  static std::mutex mutex_;
  static ThreadSafeSingleton *unique_instance_;
  ThreadSafeSingleton() {
    std::cout << "ThreadSafeSingleton instance is created.\n";
  }
  ThreadSafeSingleton(const ThreadSafeSingleton &) {}
  ThreadSafeSingleton &operator=(const ThreadSafeSingleton &) = delete;

 public:
  virtual ~ThreadSafeSingleton() {
    std::cout << "ThreadSafeSingleton instance is destroyed.\n";
  }

  static ThreadSafeSingleton *Instance() {
    if (unique_instance_ == nullptr) {
      std::lock_guard<std::mutex> guard(mutex_);
      if (unique_instance_ == nullptr) {
        unique_instance_ = new ThreadSafeSingleton();
      }
    }
    return unique_instance_;
  }
};
std::mutex ThreadSafeSingleton::mutex_;
ThreadSafeSingleton *ThreadSafeSingleton::unique_instance_ = nullptr;

#endif  // !SINGLETON_H_
