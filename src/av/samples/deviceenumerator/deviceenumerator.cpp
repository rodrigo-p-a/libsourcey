#include "scy/av/devicemanager.h"


using namespace scy;


int main(int argc, char** argv)
{
    Logger::instance().add(new ConsoleChannel("debug", LTrace));
    {
        av::DeviceManager devman;
        devman.print(std::cout);

        std::cout << "Input formats:\n\t";
        av::printInputFormats(std::cout);
        std::cout << std::endl;

        std::cout << "Output formats:\n\t";
        av::printOutputFormats(std::cout);
        std::cout << std::endl;
    }
    Logger::destroy();
    return 0;
}
