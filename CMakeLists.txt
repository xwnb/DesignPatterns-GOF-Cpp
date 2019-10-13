cmake_minimum_required(VERSION 3.0.0)
project(design_pattern VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(iterator src/iterator/iterator.cpp)

add_executable(adapter src/adapter/adapter.cpp)

add_executable(template_method src/template_method/template_method.cpp)

add_executable(factory_method src/factory_method/factory_method.cpp)

add_executable(singleton src/singleton/singleton.cpp)

add_executable(prototype src/prototype/prototype.cpp)

add_executable(builder src/builder/builder.cpp)

add_executable(abstract_factory src/abstract_factory/abstract_factory.cpp)

add_executable(bridge src/bridge/bridge.cpp)

add_executable(strategy src/strategy/strategy.cpp)

add_executable(composite src/composite/composite.cpp)

add_executable(decorator src/decorator/decorator.cpp)

add_executable(visitor src/visitor/visitor.cpp)

add_executable(mediator src/mediator/mediator.cpp)

add_executable(observer src/observer/observer.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
