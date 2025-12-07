#include "FragTrap.hpp"


int	main() {
	std::cout << "\n===== TEST 1: Basic FragTrap construction =====\n";
    {
        FragTrap st("Guardian");

        std::cout << "\n--- Testing inherited methods ---\n";
        st.attack("Enemy");
        st.takeDamage(15);
        st.beRepaired(10);

        std::cout << "\n--- Testing FragTrap special ability ---\n";
        st.highFivesGuys();

        std::cout << "\n--- Testing energy depletion ---\n";
		int i = 0;
        while (i++ < 105)
            st.attack("Training dummy");
    }

    // Here the destructor will be called automatically
    // You would see: ~FragTrap then ~ClapTrap (in that order)

    std::cout << "\n===== TEST 2: Construction / Copy / Assignment =====\n";
    {
        FragTrap a("Alpha");
        FragTrap b(a); // Copy constructor
        FragTrap c("Charlie");

        std::cout << "\n--- Testing assignment operator ---\n";
        c = a; // operator=
    }

    std::cout << "\n===== END OF TESTS =====\n";
    return 0;
}
