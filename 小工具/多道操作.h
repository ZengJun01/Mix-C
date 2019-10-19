﻿#pragma once
#include"基本定义/迷你.h"

枚举体 设置结果{
    创建新元素,
    覆盖旧元素,
};

枚举体 移除结果{
    不存在该元素,
    移除成功,
};

枚举体 取出结果{
    不存在该元素,
    取出成功,
};

枚举体 读取结果{
    不存在该元素,
    读取成功,
};

模板<类 接口类型, 类 标志, 类 ... 参数>
结构体 多道操作{
    定义 多道操作<接口类型, 标志, 参数...> 此类型;
    定义 此类型(接口类型::* 函数类型)(参数..., 标志 *);
    多道操作(接口类型 * 元, 标志 结果, 函数类型 功能) :
        元(元), 结果(结果), 功能(功能) {
    }
    此类型 运算重载()(参数 ... 列表){
        回递(元->*功能)(列表..., & 结果);
    }
    此类型 运算重载()(参数 ... 列表, 标志 * 结果){
        回递(元->*功能)(列表..., 结果);
    }
    推导类型 运算重载->() {
        回递 元;
    }
    运算重载 标志() 常量 {
        回递 结果;
    }
私有
    函数类型   功能;
    标志       结果;
    接口类型 * 元;
};
