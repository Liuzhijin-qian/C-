#pragma once
#define _CRT_SECURE_NO_WARNINGS

//����д����������  �궨��  ö�ٵȵ�

#include <stdio.h>
#define MAX_NAME    20
#define MAX_SEX     5
#define MAX_ADDRESS 20
#define MAX_TELE    12
#define MAX         50

enum Caozuo
{
	�˳�,����,ɾ��,����,�޸�,��ʾ,����
};

//�ýṹ���������ϵ�˵���Ϣ
struct PeoInfor
{
	char NAME[MAX_NAME];
	char SEX[MAX_SEX];
	char ADDRESS[MAX_ADDRESS];
	char TELE[MAX_TELE];
	int age;

};

//ͨѶ¼������
struct Contacr
{
	struct PeoInfor data[MAX];//�����ϵ�˵���Ϣ
};
//�˵��ĺ���
void meun();

//������ϵ�˵ĺ���