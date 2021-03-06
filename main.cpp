#include "andremor.hpp"
using namespace aegis;

int main(int argc, char* argv[]) {

    core bot;
    bot.wsdbg = true;
    andremor andremor_instance;

    AEGIS_TRACE(bot.log, "\nBot object created");

    bot.set_on_message_create(bind(&andremor::message_create, &andremor_instance, std::placeholders::_1));
    bot.set_on_ready(bind(&andremor::ready, &andremor_instance, std::placeholders::_1));

    bot.run();
    bot.yield();
}