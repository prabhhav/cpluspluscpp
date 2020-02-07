#include <iostream>
using namespace std;
enum eDir { STOP = 0, LEFT = 1, UPLIFT = 2, DOWNLEFT = 3, RIGHT = 4, UPRIGHT = 5, DOWNRIGHT = 6};;



class cBall
{
private:
    int x,y;
    int originalX, originalY;
    eDir direction;

public:
    cBall(int posX, int pos)
    {
        originalX = posX;
        originalY = posY;
        x = posX; y = posY;
        direction = STOP;

    }

    void Reset()
    {
        x = originalX; y = originalY;
        direction = STOP;
    }

    void changeDirection(eDir d)
    {
        direction = d;
    }

     void randomDirection()
     {
         direction = (eDir)((rand() % 6) +1);
     }
     inline int getX() { return x; }
     inline int getX() { return y; }
     inline eDir getDirection() { return direction; }

     void Move
     {
         switch (direction)
         {
         case STOP:
            break;
         case LEFT:
            x--;
            break;
         case RIGHT:
            x++;
            break;
         case UPLEFT:
            x--; y--;
            break;
         case DOWNLEFT:
            x--; y++;
            break;
         case UPRIGHT:
            x++; y--:
         case DOWNRIGHT:
            x++; y++;
            break;
         default:
            break;



         }
     }
     friend ostream & operator << (ostream & o, cBall c  )
     o << "Ball [ "x << c.x << "," << c.y << "] [ " << c.direction << "]";
     return o;
}
};

   class cPaddle
   {
   private:
    int x, y;
    int originalX, originalY

   public :
    cPaddle()
    {
        x = y = 0;
    }
    cPaddle(int posX, int poY) : cPaddle()
    {
        originalX = posX;
        originalY = posY;
        x = posX;
        y = posY;
    }

    inline void Reset() { x = originalX; y = originalY; }
    inline int getX() { return x; }
    inline int getY() { return y; }
    inline void moveUp() { y--; }
    inline void moveDown() { y++ ;}
    friend ostream & operator << ( ostream & o, cPaddle c)
    {

        o << "Paddle [" << c.x << "," << c.y << "]";
        return o;
    }
   };
   class cGameManger
   {
   private:
    int width, height;
    int score1, score2;
    char up1, down1, up2, down2;
    bool quit;
    cBall * ball;
    cPaddle *player1;
    cPaddle *player2;

   public:
    cGameManger (int w, int h)
    {
        srand(time(NULL));
        quit = false;
        up1 = 'w' : up2 = 'i';
        down1 = 's'; down2 = 'k';
        score1 = score2 = 0;
        width = w; height = h;
        ball = new cBall(w/2, h/2);
        player1 = new cPaddle(1, h / 2 - 3);
        player2 = new cPaddle(w - 2, h/2 -3);
    }

    ~GameManger()
    {
        delete ball, player1, player2;
    }

    void ScoreUp(cPaddle * player)
    {

        if (player == player1)
            score1++;
        else if (player == player2 )
            score2++;


        ball -> Reset();
        player1 -> Reset();
         player2 -> Reset();
    }

    void Draw()
    {
        system("cls");
        for (int i = 0; i < width + 2; i++)
            cout << "\xB2";

        for ( int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {

                int ballx = ball -> getX();
                int bally = ball -> getY();
                int player1x = player1 -> getX();
                int player2x = player2 -> getX();
                int player1y = player1 -> getY();
                int player2y = player2 -> getY();


                if ( j == 0)
                    cout << "\xB2";

                if (ballx == j && bally == i)
                    cout << "0"; // ball
                else if (player1x == j && player1y == i)
                    cout << "\xDB"; // player1
                     else if (player2x == j && player2y == i)
                    cout << "\xDB"; // player2

                    else if (player1x == j  &&  player1y + 1 ==i)
                    cout << "\xDB"; // player1


            }
        }
    }



         }
   };




int main()
{
    return 0;
}
