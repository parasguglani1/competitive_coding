/* If a phrase S1 is a synonym of phrase S2 and S3 is a synonym of S2, then S1, S2, S3 are synonyms of each other by associative property. S1,S2, S3 will be part of a "group".

A group can be of minimum two phrases or more.

Task of the question is: Given a Table of synonyms, Write a Program to find all groups of synonyms.

Input:

[

{"Organization": "Organisation"}, {"Group": "Organization"},

{"Dg set": "Diesel generator"}, ]

{"Orange": "Kinnu"}, {"Orange": "narangi"}

Output:

[["Organization", "Organisation", "Group"], ["Dg set", "Diesel generator"], ["Orange", "Kinnu", "narangi"]]


 */

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    // cout << "enter number of words and number of synonyms";
    int V, E;
    cin >> V >> E;
    // implement the graph of string type
    int **edges = new int *[V];
    //enter the index of the words which are synonyms
    for (int i = 0; i < V; i++)
    {
        edges[i] = new int[V];
        for (int j = 0; j < V; j++)
        {
            edges[i][j] = 0;
        }
    }
    for (int i = 0; i < E; i++)
    {
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }


    // implement the string type graph
    string *name = new string[V];
    for (int i = 0; i < V; i++)
    {
        cin >> name[i];
    }
    // implement the visited array
    int *visited = new int[V];
    for (int i = 0; i < V; i++)
    {
        visited[i] = 0;
    }
    // implement the connected function
    int init = 0;
    while (init < V)
    {
        if (visited[init] != 0)
        {
            init++;
            continue;
        }
        visited[init] = 1;
        queue<int> q;
        q.push(init);
        init++;
        vector<int> v1;
        while (!q.empty())
        {
            int x = q.front();
            v1.push_back(x);

            q.pop();

            for (int i = 0; i < V; i++)
            {
                if (edges[x][i] && !visited[i])
                {
                    q.push(i);
                    visited[i] = 1;
                }
            }
        }
        sort(v1.begin(), v1.end());
        for (int i = 0; i < v1.size(); i++)
        {
            cout << name[v1[i]] << " ";
        }
        cout << endl;
    }
    return 0;
}
