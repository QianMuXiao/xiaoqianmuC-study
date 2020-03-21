//
//  main.cpp
//  project01
//
//  Created by 萧芊牧 on 2019/7/28.
//  Copyright © 2019 萧芊牧. All rights reserved.
//

//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//void test(char* x)
//{
//    *x = 100;
//}

//void test(int a, int b, int *r1, int *r2, int *r3, int *r4)
//{
//    *r1 = a + b;
//    *r2 = a - b;
//    *r3 = a * b;
//    *r4 = a / b;
//}
//
//void teat(int a, int b, int arr[])
//{
//    arr[0] = a + b;
//    arr[1] = a - b;
//    arr[2] = a * b;
//    arr[3] = a / b;
//}


//void dayin(int a[10])
//{
//    int i;
//    for(i = 0; i < 10; i++)
//    {
//        printf("%d\n",a[i]);
//    }
//}


//struct MyData
//{
//    int i;
//    double d;
//};

//typedef struct LNode
//{
//    int data;
//    struct LNode *next;
//}LNode, *Linklist;
//
//
//struct Man
//{
//    char *name;
//    int age;
//};
//
//typedef struct Node
//{
//    Man * _data;
//    Node * _nsxtP;
//} List;
//
//void pushNode(List * list, Man * data)
//{
//    Node * newNode = (Node *)malloc(sizeof(Node));
//}
//void insterNode()
//{
//
//}
//
//void showList()
//{
//
//}
//
//int main()
//{
//
//    List * List;
//    return 0;
//
//
//
//
//
//
    
    //MyData x;
    /*
    符合数据类型
    */
    //printf("%d\n", sizeof(x));
//    int a[10];
//    int i;
//    for (i = 0; i < 10; i++)
//    {
//        a[i] = i;
//    }
//    dayin(a);
  
    
    
    
    //    int arr[1000000];
//    test(arr);
//
//    char a = 10;
//    char *x = &a;
//    test(x);
    
//    printf("%d\n", a);
//    printf("%p\n", x);
//



//    int arr[10] = {};
//    int *p = arr;
//
//    arr[0] = 10;
//    *p = 11;
//
//    arr[1] = 20;
    //*p + 1 = 21;//这个地方会先解析地址，前面已经解析了*p = 11
//    *(p + 1) = 21;
//    for (int i = 0; i < 10; ++i)
//    {
////        printf("%d\n", p[i]);
//        printf("%d\n", *(p+i));
////        printf("%d\n", *(p++));//最好不要这么写，因为遍历完以后不知到会指向哪里，不方便操作。
//    }
//    // 指针的运算 p + 数字 p — 数字 p - p2
//    //两个指针相减得到的是距离。
//    printf("\n");
//
//    int arr2[][3] = {1,2,3,4,5,6,7,8,9 };
//    int *p2 = arr2[0];
//    printf("%p\n", arr2);
//    printf("%p\n", arr2[0]);
//    printf("%p\n", &arr2[0][0]);
//    printf("\n");
//
//
//    int (*p2)[3] = arr2;
//    printf("%p\n", p2);
//    printf("%p\n", p2+1);
//    printf("%p\n\n", &arr2[1][0]);
//    for (size_t i = 0; i < 3; i++)
//    {
//        for (size_t j = 0; j < 3; j++)
//        {
//            printf("%d", *(*(p2 + i) + j));
//        }
//        printf("\n");
//    }
    
    
//    const char *s = "asdasdas";
//    printf(s);
    //动态内存
//    int l = 5;
//    scanf("%d", &l);
//
//    char s[5]; //这里会自动开辟一个空间
//    //char *p = s;
//    char *p = (char*)malloc(l);//动态内存 内存泄漏
    
    
    

//    int * p;
//    p = (int*)malloc(sizeof(int));
//    *p=5;
//    printf("p的地址是%p\n",&p);
//    printf("p的长度是%dByte\n",sizeof(p));
//    printf("p的值是%d\n",p);
//    printf("p指向地址的值是%d\n",*p);
//    printf("p指向地址的值的长度是%dByte\n",sizeof(*p));
//    return 0;
    
//    int *p = (int*)malloc(sizeof(int)*10);
//
//    printf("%d\n",sizeof(p));
    
    
    
    
//    int a=10;
//    int *p;
//    p=&a;
//    *p=5;
//    printf("%d\n",*p);
//    printf("%d\n", a);
//    printf("%p\n", p);
    
//    getchar();
//        return 0;






//}
//#include <iostream>
//#include <stdio.h>
//#define maxsize 100;
//typedef struct ArcNode
//{
//    //这个是邻接表的边结点用来表示每个
//    //结点指向来那几个其他的结点
//    int adjvex;//用来表示这条边指向的结点编号
//    struct ArcNode *nextacr;//指向下一个边结点
//    int info;//用来记载这条边的附带信息，比如权值之类的
//}ArcNode;
//typedef struct VNode
//{
//    int data;//用来保存这个结点本身存储的数据
//    ArcNode *firstarc;//用来保存结点链接的顺位第一条边
//    //然后这个边就会自动指向这个结点的其他边
//}VNode;
//
//typedef struct AGraph
//{
//    VNode adjlist[100];
//    int n, e;
//    //这个相当于把每个结点列成一个但链表每个结点后面跟着自己指向的边
//    //n和e代表结点数和边数方便存取
//}AGraph;
//void Operat(AGraph *G, int v)
//{
//    printf("%d\n", G -> adjlist[v].data);
//}

#include <iostream>
#include <stdio.h>
#include <vector>
#define maxsize 100
#define long 10
using namespace std;

typedef struct
{
    int data[long + 1];//这里比标准长度➕1是因为data[0]一般闲置/哨兵
    int length;
}Sqlist;//顺序表的结点定义
typedef struct ArcNode
{
    //这个是邻接表的边结点用来表示每个
    //结点指向来那几个其他的结点
    int adjvex;//用来表示这条边指向的结点编号
    struct ArcNode *nextacr;//指向下一个边结点
    int info;//用来记载这条边的附带信息，比如权值之类的
}ArcNode;
typedef struct VNode
{
    int data;//用来保存这个结点本身存储的数据
    int count;//后面在拓扑排序里面用来计算每个结点的入度
    ArcNode *firstarc;//用来保存结点链接的顺位第一条边
    //然后这个边就会自动指向这个结点的其他边
}VNode;

typedef struct AGraph
{
    VNode adjlist[maxsize];
    int n;//表示结点数
    int e;//表示边的数量
    //这个相当于把每个结点列成一个单链表每个结点后面跟着自己指向的边
    //n和e代表结点数和边数方便存取
}AGraph;
////////////////////////////////////////////////
//上面的是用邻接表表示的图
int visited[maxsize] = {0};//给DFS标记访问用
/////////////////////////////////////////////////
void Operat(AGraph *G, int v)//对结点的操作，输出数据
{
    printf("%d\n", G -> adjlist[v].data);
}
////////////////////////////////////////////////
void DFS(AGraph *G, int v)
{
    ArcNode *p;
    visited[v] = 1;
    Operat(G, v);
    p = G -> adjlist[v].firstarc;
    while (p != NULL)
    {
        if (visited[p -> adjvex] == 0)
        {
            DFS(G, p -> adjvex);/* code */
        }
        p = p -> nextacr;
    }
}
//////////////////////////////////////////////////
//上面的是深度优先搜索用邻接表存储的图
/////////////////////////////////////////////////
void BFS(AGraph *G, int v)
{
    ArcNode *p;
    int que[maxsize], front = 0,rear = 0;
    int visit[maxsize];
    int i,j;
    for (i = 0; i < (G -> n); ++i)
    {
        visit[i] = 0;//初始化标记访问的数组为0
    }
    rear = (rear + 1) % maxsize;
    que[rear] = v;
    visit[v] = 1;
    while (front != rear)
    {
        front = (front + 1) % maxsize;
        j = que[front];
        p = G -> adjlist[j].firstarc;
        while (p != NULL)
        {
            if (visit[p -> adjvex] == 0)
            {
                Operat(G, p -> adjvex);//对结点的操作为输出结点数据
                visit[p -> adjvex] = 1;
                rear = (rear + 1) % maxsize;
                que[rear] = p -> adjvex;
            }
            p = p -> nextacr;
        }
       
    }
    
}
////////////////////////////////////////////////
//上面的是广度优先搜索用邻接表存储的图
////////////////////////////////////////////////
typedef struct MGraph
{
    int edge[maxsize][maxsize];
    int n;
    int e;/* data */
    //这个是图的邻接矩阵的存储方法
}MGraph;
/////////////////////////////////////////////////
//上面的是图的邻接矩阵的表示方法
void Prim(MGraph *g, int v, int &sum)
{
    int lowcost[maxsize];
    int vset[maxsize];
    int z;
    int i, j, k = 0, min;
    z = v;
    for (i = 0; i < (g -> n); ++i)
    {
        lowcost[i] = g -> edge[v][i];
        vset[i] = 0;
    }
    vset[v] = 1;
    sum = 0;
    for (i = 0; i < (g -> n - 1); ++i)
    {
        min = maxsize;
        for (j = 0; j < (g -> n); ++j)
        if (vset[j] == 0 && lowcost[j] < min)
            {
                min = lowcost[j];
                k = j;
            }
        vset[k] = 1;
        z = k;
        sum += min;
        for (j = 0; j < (g -> n); ++j)
            if (vset[j] == 0 && g -> edge[z][j] < lowcost[j])
                lowcost[j] = g -> edge[z][j];
    }
}
/////////////////////////////////////////////////
//上面的是Prim算法球最小生成树
/////////////////////////////////////////////////
typedef struct Road //这个是用来存图的边和结点信息的（图个方便）
{
    int a, b;//边的两个定点的信息，a b代表结点编号
    int w;//边的权值
}Road;

int v[maxsize];//这个是克鲁斯卡尔算法的并查集数组
Road road[maxsize];//用来存取图的边信息的

int getRoot(int a)//并查集中用来查找跟结点的函数
{
    while (a != v[a])
    a = v[a];
    return a;
}
//////////////////////////////////////////////////
//克鲁斯卡尔算法一般会在road数组中先存好
//图中各个边跟边的两个顶点的信息
void Kruskal(MGraph *g, int &sum, Road road[])
{
    int i;
    int N, E, a, b;
    N = g -> n;
    E = g -> e;
    sum = 0;
    for(i = 0; i < N; ++i)
    {
        v[i] = i;
    }

    //sort(road, E); *这里的sort是用于对数组进行排序的函数
    //排序完成后为从小到大
    
    for(i = 0; i < E; ++i)
    {
        a = getRoot(road[i].a);//排序完了以后权值最低的边的起点
        b = getRoot(road[i].b);//排序完了以后权值最小的边的终点
        if(a != b)//这里不太明白？
        {
            v[a] = b;
            sum += road[i].w;
        }
    }
}
//////////////////////////////////////////////
//上面是克鲁斯卡尔算法求最小生成树
//////////////////////////////////////////////
void Dijkstra(MGraph g, int v, int dist[], int path[])
{
    int set[maxsize];//set是标记访问数组
    int min, i, j, u = 0;
    for (i = 0; i < g.n; ++i)
    {
        dist[i] = g.edge[v][i];//dist[]这个数组表示从起点V的第一轮开始
        //其他几个点到v点的距离
        set[i] = 0;//初始化标记访问数组全部为0
        if(g.edge[v][i] < maxsize)//相当于筛选钓距离是无穷大的点
        {
            path[i] = v;//相当于这一轮过后其他几个点的前驱是起点
        }
        else
        {
            path[i] = -1;//没有前驱
        }
    }
    set[v] = 1;//标记已经访问了v点。
    path[v] = -1;
    //上面这一段是对工作变量跟数组的初始化。
    for (i = 0; i < (g.n - 1); ++i)//这里循环(n-1)次是因为已经标记了起点了剩下n-1个点需要标记
    {
        min = maxsize;//min取一个比所有权值都大的数就行
        for (j = 0; j < g.n; ++j)//这个循环先选出起点v链接的最短的未访问的一个边连上
        {
            if (set[j] == 0 && dist[j] < min)
            {
                u = j;//u相当于吧这个最短的边连接的点的名称传递出去。
                min = dist[j];
            }
        }
        set[u] = 1;//吧这个点标记访问。
        for (j = 0; j < g.n; ++j)//就开始一次次循环看看有没有曲线比直接走更短的，更短的就改最小权值和经过的点
        {
            if (set[j] == 0 && (dist[u] + g.edge[u][j]) < dist[j])
            {
                dist[j] = dist[u] + g.edge[u][j];
                path[j] = u;
            }
        }
    }
}
////////////////////////////////////////////////////////////////
//上面是迪杰斯特拉算法时间复杂度为O(n^2)求最短路径
void printfPath(int path[], int a)
{
    int stack[maxsize], top = -1;
    while (path[a] != -1)//这个循环逆向进栈
    {
        stack[++top] = a;
        a = path[a];
    }
    stack[++top] = a;//我不太清楚为什么要加入这个，为了告诉大家输出的是到a的路径？
    while (top != -1)//这个循环顺序输出路径
    {
        cout << stack[top--] <<" ";
    }
    cout << endl;
}
////////////////////////////////////////////////////////////////
//上面的是打印路径的函数
void Floyd(MGraph g, int path[][maxsize])
{
    int i, j, k;
    int A[maxsize][maxsize];
    for (i = 0; i < g.n; ++i)
    {
        for (j = 0; i < g.n; ++j)
        {
            A[i][j] = g.edge[i][j];
            path[i][j] = -1;
        }
    }
    for (k = 0; k < g.n; ++k)
    {
        for(i = 0; i < g.n; ++i)
        {
            for (j = 0; j < g.n; ++j)
            {
                if(A[i][j] > A[i][k] + A[k][j])
                {
                    A[i][j] = A[i][k] + A[k][j];
                    path[i][j] = k;
                }
            }
        }
    }
}
//////////////////////////////////////////////////////
//上面的是弗洛伊德算法求邻接矩阵存储的图的最短路径
void printfFloydPath(int u, int v, int path[][maxsize])
{
    if (path[u][v] == -1)
    {
        cout << path[u][v];
    }
    else
    {
        int min = path[u][v];
        printfFloydPath(u, min, path);
        printfFloydPath(min, v, path);
    }
    
}
//这个是用递归的方法输出最短路径的结点名称
int TopSort(AGraph *G)
{
    int i, j, n = 0;
    int stack[maxsize], top = -1;
    ArcNode *p;
    for (i = 0; i < G -> n; i++)
    {
        if (G -> adjlist[i].count == 0)
        {
            stack[++top] = i;
        }
    }
    while (top != -1)
    {
        i = stack[top--];
        ++n;
        cout << i <<" ";
        p = G -> adjlist[i].firstarc;
        while (p != NULL)
        {
            j = p -> adjvex;
            --(G -> adjlist[j].count);
            if (G -> adjlist[j].count == 0)
            {
                stack[++top] = j;
            }
            p = p -> nextacr;
        }
        
    }
    if (n == G -> n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

void BInsertSort(Sqlist &L)//折半查找
{
    int i, j, l, h, m;
    for (i = 2; i <= L.length; ++i)
    {
        L.data[0] = L.data[i];
        l = 1;
        h = i - 1;
        while (l <= h)
        {
            m = (l + h) / 2;
            if (L.data[0] < L.data[m])
            {
                h = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        for (j = i - 1; j >= h + 1; --j)
            {
                L.data[j + 1] = L.data[j];
            }
        L.data[h + 1] = L.data[0];
    }
}






//void swap(int *x, int *y)//一个简单的交换函数
//{
//    int temp;
//    temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
//void BuddleSort(int R[],int n)
//{
//    int i, j, flag;
//    for(i = n - 1; i >= 1; --i)
//    {
//        flag = 0;
//        for(j = 1; j <= i; ++j)
//        {
//            if(R[j - 1] > R[j])
//            {
//                swap(R[j - 1], R[j]);
//                flag = 1;
//            }
//            if(flag == 0)
//            {
//                return;
//            }
//        }
//
//    }
//}
//
//void InsertSort(int R[],int n)
//{
//    int i, j, temp;
//    for(i = 0; i < n; i++)
//    {
//        if(R[i] > R[i + 1])
//        {
//            temp = R[i + 1];
//            for(j = i; j >= 0 && temp > R[j]; j--)
//            {
//                R[j] = R[j - 1];
//            }
//            R[j] = temp;
//        }
//    }
//
//}
//void DoubleBuddleSort(int R[], int n)
//{
//    int low, high, l, h, j;
//    low = 0;
//    high = n - 1;
//    while (low < high)
//    {
//        l = low + 1;
//        h = high - 1;
//        for(j = low; j < high; j++)
//        {
//            if(R[j] > R[j + 1])
//            {
//                swap(R[j], R[j + 1]);
//                h = j;
//            }
//        }
//        high = h;//这一趟相当于吧最大的冒泡到最后一个了所以这里高位-1
//        for(j = high; j > low; j--)
//        {
//            if(R[j] < R[j - 1])
//            {
//                swap(R[j], R[j - 1]);
//                l = j;
//            }
//        }
//        low = l;
//    }
//}
//
//int main()
//{
//    int i;
//
//    int K[20] = {7, 3, 4, 2, 1, 6, 8, 10, 9, 5,13,12,15,16,11,14,17,20,19,18};
//    // i = FindMin(K, 0, 19);
//    // cout << i <<"\n";
//    //SelectSort(K, 20);
//    DoubleBuddleSort(K, 20);
//    for(i = 0; i < 20; i++)
//    {
//        //cout << R[i] <<" ";
//        cout << K[i] <<" ";
//    }
//    cout <<"\n";
//}



void swap(int *x, int *y)//一个简单的交换函数
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int FindMin(int R[], int low, int high)
{
    int i,temp;
    temp = low;
    for(i = 1; i <= high; i++)
    {
        if(R[i] < R[temp])
        {
            temp = i;
        }
    }
    return temp;
}
void SelectSort(int R[], int n)
{
    int i, j, k;
    for(i = 0; i < n; ++i)
    {
        k = i;
        for(j = i + 1; j < n; ++j)
        {
            if(R[k] > R[j])
            {
                k = j;
            }
        }
        swap(R[i], R[k]);
    }
}

void DoubleBuddleSort(int R[], int n)
{
    int low, high, l, h, i, j;
    low = 0;
    high = n - 1;
    while (low < high)
    {
        l = low + 1;
        h = high - 1;
        for(j = low; j < high; j++)
        {
            if(R[j] > R[j + 1])
            {
                swap(R[j], R[j + 1]);
                h = j;
            }
        }
        high = h;//这一趟相当于吧最大的冒泡到最后一个了所以这里高位-1
        for(j = high; j > low; j--)//这一趟相当于从倒数第二个开始逆向冒泡
        {
            if(R[j] < R[j - 1])
            {
                swap(R[j], R[j - 1]);
                l = j;
            }
        }
        low = l;
    }
}
int step = 1;
void HLT(int n, char A, char B, char C)
{
    if(n > 0)
    {
        HLT(n -1, A, C, B);
        printf("%d:%c-->%c\n",step++, A, C);
        HLT(n -1 ,B, A, C);
    }
}
int main()
{
    int i;
    int R[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int K[20] = {1, 3, 4, 2, 7, 6, 8, 10, 9, 5,13,12,15,16,11,14,17,20,19,18};
    int dk[3] = {5, 3, 1};
    char A = 'a';
    char B = 'b';
    char C = 'c';
    vector<double> vec1 = {1.1, 2.2, 3.3, 4.4};
    
    //DoubleBuddleSort(K, 20);
    //DoubleBuddleSort(K, 20);
    //shellinsert(K, 20, 1);
    //InsertSort(K, 20);
    //BuddleSort(K, 20);
    //BuddleSortII(K, 20);
    //QuickSort(K, 0, 19);
    //SelectSort(K, 20);
//    for(i = 0; i < 20; i++)
//    {
//        //cout << R[i] <<" ";
//        cout << K[i] <<" ";
//    }
    //HLT(20, A, B, C);
    cout << "\n测试上面的函数是否有问题无问题即可输出\n";
}
