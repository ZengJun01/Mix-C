﻿#include"小工具/多道操作.h"

定义 文字 常量 * 文字串;
结构体 甲 {
    甲() : 
        列表 {} {
    }
    定义 多道操作<甲, 设置结果, 自然数, 文字串, 文字串> 多道设置;

    多道设置 设置(自然数 下标, 文字串 名字, 文字串 台词, 设置结果 * 结果 = 空值) {
        设置结果 临时;
        若 (下标 >= 容量) {
            抛;
        }
        若 (结果 == 空值){
            结果 = & 临时;
        }
        结果[0] = 列表[下标] == 空值 ? 
            设置结果::创建新元素 : 
            设置结果::覆盖旧元素;
        列表[下标] = 名字;
        回递 多道设置(此指针, 结果[0], & 甲::设置);
    }
私有
    静态 符号常量 自然数 容量 = 32;
    文字串 列表[容量];
};

主函数() {
    甲         某某的损友;
    设置结果   状态;
    某某的损友.设置
        (0, u"贺碧池", u"大学滴生活就是这样，有哭有泪又苦又累")
        (1, u"唐唐",   u"黄段字看多了")
        (2, u"黄老板", u"你的频率是多少？")
        (3, u"贱贱兄", u"我lai（奶）lai（奶）...")
        (4, u"小俊俊", u"MMP")
        (5, u"老表",   u"我命由我不由天")
        (6, u"马费",   u"loop 为民除害，害群之马，马拉戈壁，逼上梁山，山穷水尽，尽力而为，为所欲为")
        (7, u"发哥",   u"有些人天生就会装逼，一般人学不来的")
        (7, u"小猫",   u"我不记得我有说过这样的话，但我确实说过这样的化", & 状态)
        (8, u"范衰衰", u"我永远，都学不会欸~");
    状态 = 某某的损友.设置
        (9, u"林峰",   u"在厕所拉个翔就传染了，太可怕了");
    回递 0;
}
