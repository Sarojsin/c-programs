void rev(int number[])
{ int store;
    for (int i = 0; i < n/2; i++)// 9 refere to how much numbers in array
{
    store = number[i];
    number[i] = number[8 - i];
    number[8 - i] = store;
}}