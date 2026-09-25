#include <SoftwareSerial.h>

// 定义HC-06连接引脚（根据实际接线修改）
#define BT_RX_PIN 2    // HC-06的TX应连接到Arduino的2号引脚
#define BT_TX_PIN 3    // HC-06的RX应连接到Arduino的3号引脚

SoftwareSerial bluetooth(BT_RX_PIN, BT_TX_PIN);

void setup() {
  // 初始化与电脑通信的串口（USB）
  Serial.begin(9600);
  Serial.println("=== Arduino蓝牙转发器已启动 ===");
  Serial.println("等待HC-06连接...");
  
  // 初始化与HC-06通信的串口
  bluetooth.begin(9600);  // HC-06默认波特率为9600
  delay(500);  // 等待蓝牙模块初始化完成
  
  // 自检：尝试发送测试字符到HC-06（仅用于确认通信）
  bluetooth.println("AT");
  delay(200);
  if (bluetooth.available()) {
    Serial.println("HC-06通信正常！");
  } else {
    Serial.println("警告：未检测到HC-06响应，请检查连接！");
  }
}

void loop() {
  // 1. 检查是否有来自HC-06（平板）的数据
  if (bluetooth.available()) {
    char data = bluetooth.read();
    Serial.print(data);  // 转发到电脑串口
  }

  // 2. （可选）检查是否有来自电脑串口的数据，转发到平板
  if (Serial.available()) {
    char cmd = Serial.read();
    bluetooth.print(cmd);  // 转发到HC-06
  }
}