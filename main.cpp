#include "Meniu.h"
#include "AbonatRepository.h"
#include "Repository.h"
int main() {
    Singleton s=Singleton::getInstance();
    s.startMeniu();
    return 0;
}
