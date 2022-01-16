//19.删除链表的倒数第N个结点
/**
*单一链表的定义。
*struct ListNode{
*int Val；
*ListNode*Next；
*ListNode()：val(0)，Next(Nullptr){}
*ListNode(Int X)：val(X)，Next(Nullptr){}
*ListNode(int x，ListNode*Next)：val(X)，Next(Next){}
 * };
 */
类解{
公众：
    INT 盖特伦(ListNode*Head){
        INT伦=0;
        当(头！=nullptr)
        {
++连；
头=头->下一个;
        }
        回归兰；
    }
ListNode*RemoveNthFromEnd(ListNode*Head，INT(N){
       INT兰斯=盖特伦(头)；
ListNode*p=新ListNode(0，头)；
ListNode*cur=p；
       为(INTI=1；I<length-n+1++i)
       {
Cur->下一个;
       }
库尔->下一个=cur->下一个->下一个;
ListNode*ans=p->下一个;
删除p；
       回归非政府组织；
       }
};
//20.有效的括号
类解{
公众：
    布尔 IsValid(字符串s){
        INTN.大小();
堆栈<INT>堆栈；
        为(INTI=0；i<n；++i){
            如果(s[i]=='(')
            {
叠起来。推(')');
            }
            其他 如果(s[i]=='{')
            {
叠起来。推('}');
            }
           其他 如果(s[i]=='['){
叠起来。推(']');
            }
            其他 如果(堆叠。空空()\x{e76f}Stack。顶()回归 假的;
            其他叠起来。波普();
        }
        回归叠起来。空空();
    }
};
//21.合并两个有序数组
/**
*单一链表的定义。
*struct ListNode{
*int Val；
*ListNode*Next；
*ListNode()：val(0)，Next(Nullptr){}
*ListNode(Int X)：val(X)，Next(Nullptr){}
*ListNode(int x，ListNode*Next)：val(X)，Next(Next){}
 * };
 */
类解{
公众：
ListNode*MergeTwoList(ListNode*list1，ListNode*list2){
ListNode*head=newListNode(0);
ListNode*Current=Head；
ListNode*currentlist 1=list1；
ListNode*currentlist 2=list2；
        当(currentlist1！=nullptr&¤tlist2！=nullptr){
            如果(Curentlist 1->瓦尔>Curentlist 2->瓦尔){ 
电流->下一个=当前列表2；
Currentlist 2=currentlist 2->下一个;
电流=电流->下一个;
            }
            其他{   
电流->下一个=当前列表1；
当前列表1=当前列表1->下一个;
电流=电流->下一个;
            }
        }
        如果(currentlist 1==nullptr)Current->下一个=当前列表2；
        其他电流->下一个=当前列表1；
        回归头->下一个;
    }
};
//24.两两交换链表中的节点
/**
*单一链表的定义。
*struct ListNode{
*int Val；
*ListNode*Next；
*ListNode()：val(0)，Next(Nullptr){}
*ListNode(Int X)：val(X)，Next(Nullptr){}
*ListNode(int x，ListNode*Next)：val(X)，Next(Next){}
 * };
 */
类解{
公众：
ListNode*交换场(ListNode*Head){
        ////递归调用
        //如果(HEAD==nullptr_x_->Next=_nullptr){
        //返回头；
        // }
        //ListNode*tmp=新的ListNode(0)；
        //TMP=Head->Next；
        //Head->Next=swapPair(tmp->Next)；//
        //TMP->Next=头；
        //返回TMP；
        //迭代法
        如果(head==nullptr\x\x{e76f}>下一个==nullptr){
            回归头部；
        }
ListNode*哑myhead=newListNode(0);
笨蛋->下一个=头；
ListNode*tmp=哑头；
        当(TMP->下一个！=nullptr&&tmp->下一个->下一个！=nullptr){
ListNode*one=tmp->下一个;
ListNode*2=tmp->下一个->下一个;
TMP->下一个=2；
一->下一个=2->下一个;
二->下一个=1；
TMP=tmp->下一个->下一个;
        }
        回归笨蛋->下一个;
    }
};
//26.删除有序数组中的重复项
类解{
公众：
//快慢指针
    INT 移除(向量<INT>&num){
        INTN=名词。大小();
        如果(n=0){
            回归 0;
        }
        其他{
       INTFAST=1，慢=1;
       当(快速<n){
           如果(快)(快)=快[快]1]){
[慢]=[快]；
++慢；
           }
++快；
       }
       回归缓慢；

        }
    }
};
//33.搜索旋转排序数组
类解{
公众：
    /*二分查找
如果前半部分有序则取查找前半部分的
在前半部分区间就让右界减小否则左界增加
后半部分则相反*/
    INT 搜索(向量<INT>&num，INT目标){
        INTN=名词。大小();
        如果(n=0)回归 -1;
        如果(n=1)回归努姆[0==目标？0:-1;
        INTL=0，r=N-1;
        当(l<=r){
            INTMID=(l+r)/2;
            如果(目标==num[MID])回归中；
            如果(名词)0]<=num[MID]{
                如果(名词)0]<=目标&和目标<num[MID]{
R=r-1;
                }
                其他{
L=l+1;
                }
            }
            其他{
                如果(目标>名词[MID]&<；=num[N-]1]){
L=l+1;
                }
                其他{
R=r-1;
                }
            }
        }
        回归 -1;
    }
};
//34.在排序数组中查找元素的第一个和最后一个位置
类解{
公众：
//这个方法是遍历数组时间复杂度为O(N)；
向量<INT> 搜索范围(向量<INT>&num，INT目标){
        INTN=名词。大小();
        INT数=0;
向量<INT>ANS；
        为(INTI=0；i<n；++i){
            如果(名词[i]==目标){
                如果(计数==0){
安。推回(I)；
计数++；
                    继续;
                }
计数++；
                }
        }
        如果(计数==0){
安。推回(-1);
安。推回(-1);
            回归非政府组织；
        }
        其他{
安。推回(ANS)背()+计数-1);
        回归非政府组织；
        }
    }
};
//35.搜索插入位置
类解{
公众：
    INT 搜索插入(向量<INT>&num，INT目标){
        INTN=名词。大小();
        INT左=0，右=n-1;
        INT中；
        当(左<右){
中间=(左+右)/2;
            如果[中]==目标){回归中间；}
            如果(目标){
右=中-1;
            }
            如果[中]<目标]{
左=中间+1;
            }
        }
        回归目标<=num[左]？左：左+1;
    }
};
//36.有效数独
类解{
公众：
    布尔 IsValidSudoku(向量<向量<焦耳>>&board){
        INT行[9][9];
        INT栏[9][9];
        INT小[小]3][3][9];
        梅塞特(行，0,大小(行)；
        //Memset函数将行后的xx个字节改为0
        梅塞特(栏，0,大小(栏))；
        梅塞特(小，0,大小(小))；
        /*遍历一次，设置三个数组，一个存储每行的情况，一个存储每列的情况，最后一个是三维数组存储小九宫格*/
        //不为，的时候，就在对应位置上加一，最后如果大于1的话就是出现了多次
        //最后注意九宫格I/3，j/3对应于九宫格的位置
        为(INTI=0；我<9；I++){
            为(INTJ=0J<9；j++){
                焦耳C=木板[i][j]；
                如果(C！='.'){
                    INT 指数=c-'0'-1;
行[i][指数]++;
[j]栏[指数]++;
小[我]3][j/3][指数]++;
                    如果(第[i]行]指数]>1[j]栏[指数]>1小[我/我]3][j/3][指数]>1){
                        回归 假的;
                    }
                }
            }
        }
    回归 千真万确;
    }
};
//39.组合总和
类解{
公众：
向量<向量<INT>> 组合和(向量<INT>和候选人，INT目标){
结果。清澈();
路径。清澈();
        排序(候选人。开始()，候选人。端部());
        回溯(候选人，目标，0,0);
        回归结果；
}
私人：
向量<向量<INT>>结果；
向量<INT>路径；
    空隙 回溯(向量<INT>和候选人，INT目标，INT苏姆INT目前)
    {
       //如果(和>目标)返回；
        如果(SUM==目标值){
结果。推回(路径)；
               回归 ;}
        为(INTI=当前；我<候选人。大小()&&候选人[i]+SUM<=目标值；++i){
SUM+=候选人[I]；
路径。推回(候选人[i])；
            回溯(候选人、目标、金额、1)；
SUM-=候选人[I]；
路径。弹背();
        }
    }
};
//40.组合总和Ⅱ
//当候选元素相等时，如果前一个=false，则同一树层使用过
//如果use=true，同一树支使用过，避开重复的数组就当use=false时候跳过此次循环
类解{
公众：
向量<向量<INT>> 组合摘要2(向量<INT>和候选人，INT目标){
向量<布尔>使用(候选人。大小(),假的);
结果。清澈();
路径。清澈();
        排序(候选人。开始()，候选人。端部());
        回溯(候选人，目标，0,0使用)；
        回归结果；
}
私人：
向量<向量<INT>>结果；
向量<INT>路径；
    空隙 回溯(向量<INT>和候选人，INT目标，INT苏姆INT电流，矢量<布尔>及使用)
    {
       //如果(和>目标)返回；
    
        如果(SUM==目标值){
结果。推回(路径)；
               回归 ;}
        为(INTI=当前；我<候选人。大小()&&候选人[i]+SUM<=目标值；++i){
            如果(我>)0候选人[i]==候选人[i]1]和使用的[我-1]==假的){
           继续;
       }
SUM+=候选人[I]；
路径。推回(候选人[i])；
使用[i]=千真万确;
            回溯(候选人、目标、总数、i+)1使用)；//I+1可以去掉重复选用同一个数组元素的情况
SUM-=候选人[I]；
路径。弹背();
使用[i]=假的;
        }
    }
};
//41.缺失的第一个正数
类解{
公众：
//主要思想是将每个元素x挪到x-1的位置上，然后遍历数组，第一个不满足条件的就是缺失的第一个正数
    INT 第一次误判(向量<INT>&num){
        为(INTI=0；我<名词。大小()；++i){
            当(num[i]>0&num[i]<=num.大小()&num[i]=num[i]-1]){
                互换(num[i]，num[num][i]-1]);
            }
        }
        为(INTI=0；我<名词。大小()；i++){
            如果(名词[I]=1+i){
                回归I+1;
            }
        }
      回归孩子们。大小()+1;
    }
};
