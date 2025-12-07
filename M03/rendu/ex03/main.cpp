#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    std::cout << "\n===== TEST 1 : CONSTRUCTION =====\n";
    {
        DiamondTrap d("Leon");
    }

    std::cout << "\n===== TEST 2 : MÉTHODES DE BASE =====\n";
    DiamondTrap d("Leon");

    std::cout << "\n--- whoAmI() ---\n";
    d.whoAmI();

    std::cout << "\n--- Vérification des valeurs héritées ---\n";
    std::cout << "HitPoints      = " << d.getHitPts()      << "\n";
    std::cout << "EnergyPoints   = " << d.getEnergiesPts() << "\n";
    std::cout << "AttackDamage   = " << d.getAttackDmg()   << "\n";

    std::cout << "\n===== TEST 3 : MÉTHODE attack() =====\n";
    std::cout << "Selon le sujet, attack() est celle de ScavTrap :\n";
    d.attack("the target");

    std::cout << "\n===== TEST 4 : takeDamage() =====\n";
    d.takeDamage(20);
    std::cout << "HitPoints après dégâts = " << d.getHitPts() << "\n";

    std::cout << "\n===== TEST 5 : beRepaired() =====\n";
    d.beRepaired(10);
    std::cout << "HitPoints après réparation = " << d.getHitPts() << "\n";

    std::cout << "\n===== TEST 6 : Capacités spéciales =====\n";
    FragTrap f("Frag");
    ScavTrap s("Scav");

    std::cout << "\nFragTrap : highFivesGuys\n";
    f.highFivesGuys();

    std::cout << "\nScavTrap : guardGate\n";
    s.guardGate();

    std::cout << "\n===== TEST 7 : SCOPES & Destructeurs =====\n";
    {
        DiamondTrap temp("Temp");
        temp.whoAmI();
    } // destructeur appelé ici

    std::cout << "\n===== FIN DES TESTS =====\n\n";

    return 0;
}

