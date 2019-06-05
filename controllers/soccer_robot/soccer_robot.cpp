// Author(s):         Inbae Jeong, Chansol Hong
// Maintainer:        Chansol Hong (cshong@rit.kaist.ac.kr)

#include <webots/Robot.hpp>

#include <boost/asio.hpp>
class soccer_robot
  : public webots::Robot
{
public:
  soccer_robot(double _sn): sn(_sn)
  {
  }

  void run()
  {
    while(step(1) != -1) {}
  }

private:
  double sn;
};

int main(int argc, char **argv)
{
  double sn = 0.0;
  if (argc > 1)
    sn = atof(argv[1]);

  soccer_robot sr(sn);
  sr.run();
  return 0;
}
