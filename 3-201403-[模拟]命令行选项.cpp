#include<bits/stdc++.h>
using namespace std;

const int N = 26;

int n;

bool o1[N],o2[N]; //o1无符号 o2有符号
string ans[N];

int main(){
    
    string s;
    // 格式字符串：若干 小写字母+冒号，小写字母：不带参数 小写字符+冒号：带参数
    cin>>s;
    // 处理参数
    for(int i=0; i<s.size();i++) {
        if(i+1<s.size()&&s[i+1]==':') {
            o2[s[i]-'a'] = true;
            i++; //跳过当前符号
        }
        else o1[s[i]-'a'] = true;
    }

    cin>>n;
    getchar(); // 当使用 cin 读入了 n，使用getchar() 过滤n后的回车

    // 处理接下来输入的case
    for(int i=1;i<=n;i++) {

        cout<<"Case "<<i<<":";

        getline(cin,s); // 一次读取一行命令行
        stringstream ssin(s); // 使用stringstream分割已读取的命令行

        vector<string> ops; // 定义一个 ops的vector 用于存储分割后的命令行
        while (ssin>>s) ops.push_back(s); // 读入

        for(int i = 0; i <26;i++) ans[i].clear(); // 清除上次保存过的ans

        for(int i=1;i<ops.size();i++){  //注意 i=1 "第一个不用用对它进行处理。"

            // 边界条件 1.第一位非- 2.第二位非字母或数字 3.命令行大小非2
            if(ops[i][0]!='-' || ops[i][1]<'a') break; 

            int k = ops[i][1]-'a';  // 对应 o[]编号
            if(o1[k]) ans[k] = "*"; // 如果k是个无参数 ans[k] 应该填一个随意的字符
            else if (o2[k] && i+1<ops.size()) ans[k]=ops[i+1],i++; // 如果是个有参数 ，ans[k] 应该保存参数
            else break;
        }
        
        for(int i=0; i<26;i++) {
            if(ans[i].size()){
                cout<<" -"<<char(i+'a');
                if(o2[i]) cout<<' '<<ans[i];
            }
        }
    
        cout<<endl;
    }

    return 0;
}
