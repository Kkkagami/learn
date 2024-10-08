实验目的及要求：

1. 熟悉掌握线性表顺序存储结构。


2. 掌握与应用顺序表的查找、插入、删除等基本操作算法。


3. 训练和提高结构化程序设计能力及程序调试能力。



软、硬件环境：

Dev-C++ 等开发工具


算法或原理分析（实验内容）：

1. 本实验使用线性表的顺序存储结构实现了列表类 MyList，该列表包括基本的初始化、插入、删除、扩容、获取和更新元素等操作。


2. 列表的存储使用动态数组进行管理，当数组空间不足时，自动进行扩容，扩容策略为每次容量增加为原来的 2 倍。


3. 实现了插入、删除元素时的下标调整，保证线性表的顺序性。


4. 通过封装操作，隐藏了动态数组的实现细节，提供了更高层次的接口供用户使用。
# learn