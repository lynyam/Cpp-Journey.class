#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int	main() {
	std::cout << "\n===== TEST 1: Basic ScavTrap construction =====\n";
    {
        ScavTrap st("Guardian");

        std::cout << "\n--- Testing inherited methods ---\n";
        st.attack("Enemy");
        st.takeDamage(15);
        st.beRepaired(10);

        std::cout << "\n--- Testing ScavTrap special ability ---\n";
        st.guardGate();

        std::cout << "\n--- Testing energy depletion ---\n";
		int i = 0;
        while (i++ < 55)
            st.attack("Training dummy");
    }

    // Here the destructor will be called automatically
    // You would see: ~ScavTrap then ~ClapTrap (in that order)

    std::cout << "\n===== TEST 2: Construction / Copy / Assignment =====\n";
    {
        ScavTrap a("Alpha");
        ScavTrap b(a); // Copy constructor
        ScavTrap c("Charlie");

        std::cout << "\n--- Testing assignment operator ---\n";
        c = a; // operator=
    }

    std::cout << "\n===== END OF TESTS =====\n";
    return 0;
}
