//Hop Game      DYNAMMIC PROGRAMMING
int hop(int arr, int n, int ind, int factor, int triple_hop_flag)
{
    if (ind >= n)
        return 0;
    int score = factor * arr[ind];

    int singlehop = hop(arr, n, i + 1, 1, triple_hop_flag);
    int doublehop = hop(arr, n, i + 2, 2, triple_hop_flag);
    int triplehop;

    if (triple_hop_flag)
        triplehop = hop(arr, n, i + 3, 3, false);
    else
        triplehop = 0;

    int biggestjump = max(singlehop, max(doublehop, triplehop));
    int maxscore = score + biggestjump;
    return maxscore;
}
int main()
{
    int arr[2, 4, 3, 6, 4, 8, 1];
    int n = arr.size();
    cout << hop(arr, n, 0, 1, true);
    return 0;
}