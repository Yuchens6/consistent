DEMO1:是由矩形图元和矩形感知区图元组成，鼠标放在矩形上，矩形的填充颜色会由红色变成黄色。
	     该模型中有两个图元变量：outlinecolor、inside；
	     outlinecolor变量控制矩形轮廓颜色填充；
	     inside变量于矩形和矩形感知区均有关联，在生成矩形感知区代码中会调用sgpi_is_in_rectangle函数并将返回值传递给inside变量，inside变量在通过if表达式：symbology_layer_1_G_inside(pContext) ?31:11来控制矩形填充颜色的填充。

DEMO2:是由4个条件容器组成，条件容器是根据用户定义的index值和indexes序列值生成的switch代码。indexes值决定有哪几种情况及默认值，index值决定switch跳转到哪一种情况。（注：sgfx文件中可看到用户定义的 index值和indexes序列值，其中数字代表序列号，default代表默认值，other代码无图元绘制）