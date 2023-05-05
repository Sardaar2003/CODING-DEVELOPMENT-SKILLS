// // #include <stdio.h>
// // int main()
// // {
// //     int p[10], at[10], bt[10], btt[10], ct[10], tat[10], wt[10], vis[10] = {0}, i, j, temp = 0, n, pr[10];
// //     float awt = 0, atat = 0;
// //     printf("enter no of proccess you want:");
// //     scanf("%d", &n);
// //     printf("enter %d Priority, Arrival Time and Burst Time:\n", n);
// //     for (i = 0; i < n; i++)
// //     {
// //         p[i] = i + 1;
// //         scanf("%d %d %d", &pr[i], &at[i], &bt[i]);
// //         btt[i] = bt[i];
// //     }
// //     int ans = 0;
// //     for (j = 0; j < n;)
// //     {
// //         int mn, idx;
// //         mn = idx = -5;
// //         for (i = 0; i < n; i++)
// //         {
// //             if (vis[i] == 0)
// //             {
// //                 if (ans >= at[i] && mn < pr[i])
// //                 {
// //                     mn = pr[i];
// //                     idx = i;
// //                 }
// //                 else if (ans >= at[i] && mn == pr[i])
// //                 {
// //                     if (at[idx] > at[i])
// //                     {
// //                         mn = pr[i];
// //                         idx = i;
// //                     }
// //                 }
// //             }
// //         }
// //         if (idx == -5)
// //         {
// //             ans++;
// //         }
// //         else
// //         {
// //             ans++;
// //             bt[idx]--;
// //             if (bt[idx] == 0)
// //             {
// //                 j++;
// //                 vis[idx] = 1;
// //                 ct[idx] = ans;
// //             }
// //         }
// //     }
// //     printf("\np\t A.T\t B.T\t C.T\t TAT\t WT");
// //     for (i = 0; i < n; i++)
// //     {
// //         tat[i] = ct[i] - at[i];
// //         wt[i] = tat[i] - btt[i];
// //         atat += tat[i];
// //         awt += wt[i];
// //     }
// //     atat = atat / n;
// //     awt = awt / n;
// //     for (i = 0; i < n; i++)
// //         printf("\nP%d\t %d\t %d\t %d \t %d \t%d", p[i], at[i], btt[i], ct[i], tat[i], wt[i]);

// //     printf("\naverage turnaround time is %f", atat);
// //     printf("\naverage wating timme is %f", awt);
// //     return 0;
// // }
// #include <stdio.h>
// int main()
// {
//     int p[100], at[100], bt[100], btt[100], ct[100], tat[100], wt[100], vis[100] = {0}, i, j, temp = 0, n, pr[100], m, bf[10000];
//     float awt = 0, atat = 0;
//     printf("enter no of proccess you want:");
//     scanf("%d", &n);
//     printf("enter %d Arrival Time and Burst Time:\n", n);
//     int min = 1000000000, ix = -1;
//     for (i = 0; i < n; i++)
//     {
//         p[i] = i + 1;
//         scanf("%d %d", &at[i], &bt[i]);
//         btt[i] = bt[i];
//         if (min > at[i])
//         {
//             min = at[i];
//             ix = i;
//         }
//     }
//     printf("enter time quantam:");
//     scanf("%d", &m);
//     int ans = 0, ii = 0, jj = 0;
//     bf[jj++] = ix;
//     vis[ix] = 1;
//     for (j = 0; j < n;)
//     {
//         printf("%d ", bf[ii] + 1);
//         int o = bt[bf[ii]], sub;
//         if (o > m)
//         {
//             ans += m;
//             bt[bf[ii]] -= m;
//             for (i = 0; i < n; i++)
//             {
//                 if (vis[i] == 0 && at[i] <= ans)
//                 {
//                     bf[jj++] = i;
//                     vis[i] = 1;
//                 }
//             }
//             bf[jj++] = bf[ii];
//         }
//         else
//         {
//             ans += o;
//             bt[bf[ii]] -= o;
//             for (i = 0; i < n; i++)
//             {
//                 if (vis[i] == 0 && at[i] <= ans)
//                 {
//                     bf[jj++] = i;
//                     vis[i] = 1;
//                 }
//             }
//             ct[bf[ii]] = ans;
//             j++;
//         }
//         ii++;
//     }
//     printf("\np\t A.T\t B.T\t C.T\t TAT\t WT");
//     for (i = 0; i < n; i++)
//     {
//         tat[i] = ct[i] - at[i];
//         wt[i] = tat[i] - btt[i];
//         atat += tat[i];
//         awt += wt[i];
//     }
//     atat = atat / n;
//     awt = awt / n;
//     for (i = 0; i < n; i++)
//     {
//         printf("\nP%d\t %d\t %d\t %d \t %d \t%d", p[i], at[i], btt[i], ct[i], tat[i], wt[i]);
//     }
//     printf("\naverage turnaround time is %f", atat);
//     printf("\naverage wating timme is %f", awt);
//     return 0;
// }
#include <stdio.h>
int main()
{
    int p[10], at[10], bt[10], btt[10], ct[10], tat[10], wt[10], vis[10] = {0}, i, j, temp = 0, n, pr[10];
    float awt = 0, atat = 0;
    printf("enter no of proccess you want:");
    scanf("%d", &n);
    printf("enter %d Priority, Arrival Time and Burst Time:\n", n);
    for (i = 0; i < n; i++)
    {
        p[i] = i + 1;
        scanf("%d %d %d", &pr[i], &at[i], &bt[i]);
        btt[i] = bt[i];
    }
    int ans = 0;
    for (j = 0; j < n; j++)
    {
        int mn, idx;
        mn = idx = -5;
        for (i = 0; i < n; i++)
        {
            if (vis[i] == 0)
            {
                if (ans >= at[i] && mn < pr[i])
                {
                    mn = pr[i];
                    idx = i;
                }
                else if (ans >= at[i] && mn == pr[i])
                {
                    if (at[idx] > at[i])
                    {
                        mn = pr[i];
                        idx = i;
                    }
                }
            }
        }
        if (idx == -5)
        {
            ans++;
        }
        else
        {
            ans++;
            bt[idx]--;
            if (bt[idx] == 0)
            {
                j++;
                vis[idx] = 1;
                ct[idx] = ans;
            }
        }
    }
    printf("\np\t A.T\t B.T\t C.T\t TAT\t WT");
    for (i = 0; i < n; i++)
    {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - btt[i];
        atat += tat[i];
        awt += wt[i];
    }
    atat = atat / n;
    awt = awt / n;
    for (i = 0; i < n; i++)
        printf("\nP%d\t %d\t %d\t %d \t %d \t%d", p[i], at[i], btt[i], ct[i], tat[i], wt[i]);

    printf("\naverage turnaround time is %f", atat);
    printf("\naverage wating timme is %f", awt);
    return 0;
}