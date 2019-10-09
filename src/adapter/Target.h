#ifndef TARGET_H_
#define TARGET_H_

class Target {
 private:
  /* data */
 public:
  Target(/* args */) {}

  virtual ~Target() {}

  // 适配接口(表面被Client调用的)
  virtual void Request() = 0;
};

#endif  // !TARGET_H_