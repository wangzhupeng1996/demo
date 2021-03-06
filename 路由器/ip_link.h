#ifndef IP_LINK_H
#define IP_LINK_H

typedef struct ip_link{
	unsigned char ip[4];	//ip地址四个字节
	struct ip_link *next;
}IP_LINK;
extern IP_LINK *ip_head;
/******************************************************************
函	数:	IP_LINK *find_ip(IP_LINK *head, unsigned char *ip)
功	能:	插入ip过滤链表
参	数:	IP_LINK *head ip过滤链表头  IP_LINK* p 待插入节点
返回值: IP_LINK *找到的节点
*******************************************************************/
extern IP_LINK *inner_ip_link(IP_LINK *ip_head,IP_LINK* p);
/******************************************************************
函	数:	void printf_ip_link(IP_LINK *head)
功	能:	打印ip过滤链表
参	数:	IP_LINK *head ip过滤链表头
返回值: 无
*******************************************************************/
extern void printf_ip_link(IP_LINK *ip_head);
/******************************************************************
函	数:	IP_LINK *find_ip(IP_LINK *head, unsigned char *ip)
功	能:	查找ip过滤链表
参	数:	IP_LINK *head ip过滤链表头  unsigned char *ip 待查找IP
返回值: IP_LINK *找到的节点
*******************************************************************/
extern IP_LINK *find_ip(IP_LINK *ip_head, unsigned char *ip);
/******************************************************************
函	数:	void init_ip_link()
功	能:	释放ip过滤链表
参	数:	IP_LINK *head ip过滤链表头
返回值: 无
*******************************************************************/
extern void free_ip_link(IP_LINK *ip_head);
/******************************************************************
函	数:	IP_LINK *del_ip_for_link(IP_LINK *head, unsigned char *ip)
功	能:	删除ip过滤链表节点
参	数:	IP_LINK *head ip过滤链表头  unsigned char *ip 待删除IP
返回值: IP_LINK *head ip过滤链表头
*******************************************************************/
extern IP_LINK *del_ip_for_link(IP_LINK *head,unsigned char *ip);
/******************************************************************
函	数:	void init_ip_link()
功	能:	读取配置文件数据到链表
参	数:	无
返回值: 无
*******************************************************************/
extern void init_ip_link();
/******************************************************************
函	数:	void save_ip_link()
功	能:	保存链表数据到配置文件
参	数:	无
返回值: 无
*******************************************************************/
extern void save_ip_link();

#endif

