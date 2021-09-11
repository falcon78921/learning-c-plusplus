/** Assume that BlogComment is a structured
type with these fields, comment (a
string, the actual comment), and two
int fields: like, dislike which count
the number of "likes" and "dislikes" of
the comment by visitors. Assume that
nComments is an int variable that holds
the length of an array named
blogComments whose elements are of type
BlogComment. This array has been
declared and initialized. You may
assume that the array is not empty.

Assume that an string variable
mostControversial has been declared.
Write the necessary code that traverses
the blogComments array and find the
entry that is most controversial and
assign its comment field to
mostControversial. Measure the degree
of controversy by multiplying likes and
dislikes. (See how it works? Imagine 10
comments. If that is 10 likes and no
dislikes, it is not controversial and
10 times 0 is 0. But if it is evenly
split, 5 and 5, then it is
controversial, and 5 times 5 is 25... a
lot more than 0.)
**/

#include <string>

using namespace std;

int main() {

    struct BlogComment {
        string comment;
        int like, dislike;
    };

    int nComments;
    BlogComment comment1;
    BlogComment blogComments[5];

    comment1.comment = "Blar";
    comment1.like = 50;
    comment1.dislike = 100;

    string mostControversial;

    return 0;

}