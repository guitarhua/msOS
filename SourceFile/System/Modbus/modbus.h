/*
********************************************************************************
*                                Ƕ��ʽ΢ϵͳ
*                                   msOS
*
*                            Ӳ��ƽ̨:msPLC DEMO
*                          ��оƬ:STM32F103R8T6/RBT6
*                           ��������οƼ����޹�˾
*
*                                ����:����ΰ
*                                ����:������
*                                ��ʶ:Wangsw
*
*                                QQ:26033613
*                               QQȺ:291235815
*                        �Ա���:http://52edk.taobao.com
*                      ��̳:http://gongkong.eefocus.com/bbs/
*                ����:http://forum.eet-cn.com/BLOG_wangsw317_1268.HTM
********************************************************************************
*�ļ���     : modbus.h
*����       : ��չHMI��
*ԭ��       : ͨ����׼ModbusЭ����չ��ҵ��HMI��
*           : ͨ��Modbus����PLC����������ַ
*           : ͨ���ĸ����飬�������ţ�Ҳ��HMI�����ݵ�ַ��������ָ��
********************************************************************************
*�汾     ����            ����            ˵��
*V0.1    Wangsw        2014/11/8       ��ʼ�汾
********************************************************************************
*/
#ifndef __MODBUS_H
#define __MODBUS_H

#define ReadDataOutPort0X           0x01    // ��0X��ַ:00001~09999,PLC��������˿�(��Ȧ)�����ط���,���2000bit
#define ReadDataInPort1X            0x02    // ��1X��ַ:10001~19999,PLC��������˿�(����)�����ط���,���2000bit
#define ReadAdcInPort3X             0x04    // ��3X��ַ:30001~39999,PLCģ������˿�(�Ĵ���)��16bit����,���125
#define ReadRegister4X              0x03    // ��4X��ַ:40001~49999,PLC�ڲ��Ĵ���(�Ĵ���)��16bit����,���125

#define WriteSingleDataOutPort0X    0x05    // д����0X��ַ:00001~09999,PLC��������˿�(��Ȧ)�����ط���
#define WriteSingleRegister4X       0x06    // д����4X��ַ:40001~49999,PLC�ڲ��Ĵ���(�Ĵ���)��16bit����

#define WriteDataOutPort0X          0x0F    // д���0X��ַ:00000~09999,PLC��������˿�(��Ȧ)�����ط���,���1968bit
#define WriteRegister4X             0x10    // д���4X��ַ:40001~49999,PLC�ڲ��Ĵ���(�Ĵ���)��16bit����,���120

#define ReadWriteRegister4X         0x17    // ��д���4X��ַ:40001~49999,PLC�ڲ��Ĵ���(�Ĵ���)��16bit����

#define MaskRegister                0x16    // ����д�Ĵ������������û�������Ĵ����еĵ������أ�����SetBit or ReSetBit
#define ReadDeviceID                0x2B    // ��ȡ�豸ʶ����



extern void InitModbus(void);
#endif

