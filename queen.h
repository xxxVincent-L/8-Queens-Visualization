#ifndef QUEEN_H
#define QUEEN_H


class queen
{
public:
    queen();
    void recursion(int i);
    bool  judge(int arr[],int n);

    bool out=true;
    int sum1=0;
};

#endif // QUEEN_H
