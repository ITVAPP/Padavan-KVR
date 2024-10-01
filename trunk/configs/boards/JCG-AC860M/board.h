/* 
JCG-AC860M
已定义的宏：以 #define 开头的项是当前正在使用的配置选项，它们将影响固件的行为和特性。
未使用的宏：以 #undef 开头的项表示这些功能或特性被取消定义，当前不启用。
*/

/* 设备ID，唯一标识该设备 */
#define BOARD_PID		"JCG-AC860M"                // 设置设备ID为 JCG-AC860M

/* 设备名称，用于标识该设备 */
#define BOARD_NAME		"JCG-AC860M"                // 设置设备名称为 JCG-AC860M

/* 设备描述，提供设备的详细信息 */
#define BOARD_DESC		"JCG AC860M Wireless Router" // 设置设备描述为 JCG AC860M 无线路由器

/* 设备制造商的名称 */
#define BOARD_VENDOR_NAME	"JCG"                     // 设置制造商名称为 JCG

/* 设备制造商的网址 */
#define BOARD_VENDOR_URL	"http://www.jcgcn.com/"   // 设置制造商网站 URL

/* 设备模型的网址 */
#define BOARD_MODEL_URL		"http://www.jcgcn.com/"   // 设置设备模型相关的 URL

/* 启动设备所需的时间（单位：秒） */
#define BOARD_BOOT_TIME		30                         // 设置启动时间为 30 秒

/* 刷新设备固件所需的时间（单位：秒） */
#define BOARD_FLASH_TIME		120                        // 设置刷新时间为 120 秒

/* GPIO 按钮功能定义 - 取消定义按键功能1 */
#undef BOARD_GPIO_BTN_FN1                           // 不使用按键功能1

/* GPIO 重置按钮连接的引脚编号 */
#define BOARD_GPIO_BTN_RESET 18                      // 设置重置按钮的 GPIO 引脚为 18

/* GPIO WPS 按钮功能定义 - 取消定义 WPS 按钮 */
#undef BOARD_GPIO_BTN_WPS                           // 不使用 WPS 按钮

/* GPIO LED 灯定义 - 取消定义所有 LED 灯 */
#undef  BOARD_GPIO_LED_ALL                           // 不使用所有 LED 灯

/* GPIO WIFI LED 灯定义 - 取消定义 WIFI LED 灯 */
#undef  BOARD_GPIO_LED_WIFI                          // 不使用 WIFI LED 灯

/* GPIO 2.4GHz 开关 LED 灯定义 - 取消定义 2.4GHz 开关 LED 灯 */
#undef  BOARD_GPIO_LED_SW2G                          // 不使用 2.4GHz 开关 LED 灯

/* GPIO 5GHz 开关 LED 灯定义 - 取消定义 5GHz 开关 LED 灯 */
#undef  BOARD_GPIO_LED_SW5G                          // 不使用 5GHz 开关 LED 灯

/* GPIO 电源 LED 灯定义 - 取消定义电源 LED 灯 */
#undef  BOARD_GPIO_LED_POWER                         // 不使用电源 LED 灯

/* GPIO LAN LED 灯定义 - 取消定义 LAN LED 灯 */
#undef BOARD_GPIO_LED_LAN                            // 不使用 LAN LED 灯

/* GPIO WAN LED 灯定义 - 取消定义 WAN LED 灯 */
#undef BOARD_GPIO_LED_WAN                            // 不使用 WAN LED 灯

/* GPIO USB LED 灯连接的引脚编号 */
#define BOARD_GPIO_LED_USB	15                       // 设置 USB LED 灯的 GPIO 引脚为 15

/* GPIO 路由器 LED 灯定义 - 取消定义路由器 LED 灯 */
#undef BOARD_GPIO_LED_ROUTER                         // 不使用路由器 LED 灯

/* GPIO USB 电源 LED 灯定义 - 取消定义 USB 电源 LED 灯 */
#undef  BOARD_GPIO_PWR_USB                           // 不使用 USB 电源 LED 灯

/* 指示该设备是否支持 5GHz 11AC 无线标准（1=支持，0=不支持） */
#define BOARD_HAS_5G_11AC	1                         // 设置为 1 表示支持 5GHz 11AC

/* 5GHz 发送天线数量 */
#define BOARD_NUM_ANT_5G_TX	3                       // 设置 5GHz 发送天线数量为 3

/* 5GHz 接收天线数量 */
#define BOARD_NUM_ANT_5G_RX	3                       // 设置 5GHz 接收天线数量为 3

/* 2.4GHz 发送天线数量 */
#define BOARD_NUM_ANT_2G_TX	3                       // 设置 2.4GHz 发送天线数量为 3

/* 2.4GHz 接收天线数量 */
#define BOARD_NUM_ANT_2G_RX	3                       // 设置 2.4GHz 接收天线数量为 3

/* 指示以太网 LED 灯的数量 */
#define BOARD_NUM_ETH_LEDS	1                         // 设置以太网 LED 灯数量为 1

/* 表示是否具有千兆以太网（1=支持，0=不支持） */
#define BOARD_HAS_EPHY_L1000	1                       // 设置为 1 表示支持千兆以太网（L1000）

/* 表示是否具有千兆以太网（1=支持，0=不支持） */
#define BOARD_HAS_EPHY_W1000	1                       // 设置为 1 表示支持千兆以太网（W1000）

/* USB3.0 端口数量 */
#define BOARD_NUM_UPHY_USB3	1                       // 设置 USB3.0 端口数量为 1

/* USB 端口交换标志（0=不交换，1=交换） */
#define BOARD_USB_PORT_SWAP	0                       // 设置为 0 表示不交换 USB 端口
