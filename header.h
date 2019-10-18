#ifndef HEADER_H
#define HEADER_H


#define MATCH_1 ((ar[x][y] == '#' && ar[x + 1][y] == '#' && ar[x + 2][y] == '#' && ar[x + 3][y] == '#') || (ar[x][y] == '#' && ar[x][y + 1] == '#' && ar[x][y + 2] == '#' && ar[x][y + 3] == '#'))

#define MATCH_2 (ar[x][y] == '#' && ar[x][y + 1] == '#' && ar[x + 1][y] == '#' && ar[x + 1][y + 1] == '#')

#define MATCH_3 ((ar[x][y] == '#' && ar[x + 1][y] == '#' && ar[x + 1][y - 1] == '#' && ar[x + 1][y + 1] == '#'  || (ar[x][y] == '#' && ar[x + 1][y] == '#' && ar[x + 1][y - 1] == '#' && ar[x + 2][y] == '#') ||  (ar[x][y] == '#' && ar[x + 1][y + 1] == '#' && ar[x][y + 1] == '#' && ar[x][y + 2] == '#') || (ar[x][y] == '#' && ar[x + 1][y] == '#' && ar[x + 1][y + 1] == '#' && ar[x + 2][y] == '#'))

#define MATCH_4 ((ar[x][y] == '#' && ar[x][y + 1] == '#' && ar[x + 1][y] == '#' && ar[x + 2][y] == '#') || (ar[x][y] == '#' && ar[x + 1][y + 2] == '#' && ar[x][y + 1] == '#' && ar[x][y + 2] == '#') || (ar[x][y] == '#' && ar[x + 2][y - 1] == '#' && ar[x + 2][y] == '#' && ar[x + 1][y] == '#') || (ar[x][y] == '#' && ar[x + 1][y] == '#' && ar[x + 1][y + 1] == '#' && ar[x +1][y + 2] == '#'))

#define MATCH_5 ((ar[x][y] == '#' && ar[x][y + 1] == '#' && ar[x + 1][y + 1] == '#' && ar[x + 2][y + 1] == '#') || (ar[x][y] == '#' && ar[x + 1][y - 2] == '#' && ar[x + 1][y - 1] == '#' && ar[x + 1][y] == '#') || (ar[x][y] == '#' && ar[x + 2][y + 1] == '#' && ar[x + 2][y] == '#' && ar[x + 1][y] == '#') ||(ar[x][y] == '#' && ar[x + 1][y] == '#' && ar[x][y + 1] == '#' && ar[x][y + 2] == '#'))

#define MATCH_6 ((ar[x][y] == '#' && ar[x][y + 1] == '#' && ar[x + 1][y - 1] == '#' && ar[x + 1][y] == '#') || (ar[x][y] == '#' && ar[x + 1][y] == '#' && ar[x + 1][y + 1] == '#' && ar[x + 2][y + 1] == '#'))

#define MATCH_7 ((ar[x][y] == '#' && ar[x + 1][y + 2] == '#' && ar[x + 1][y + 1] == '#' && ar[x][y + 1] == '#') || (ar[x][y] == '#' && ar[x + 1][y] == '#' && ar[x + 1][y - 1] == '#' && ar[x + 2][y - 1] == '#'))

#endif
