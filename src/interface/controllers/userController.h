class UserController {
public:
    explicit UserController(std::shared_ptr<UserService> userService) : userService(std::move(userService)) {}

    void createUser(int id, const std::string& name) {
        try {
            userService->createUser(id, name);
            std::cout << "User created successfully.\n";
        } catch (const std::exception& e) {
            std::cerr << "Error creating user: " << e.what() << "\n";
        }
    }

    void listUsers() const {
        auto users = userService->listUsers();
        std::cout << "User List:\n";
        for (const auto& user : users) {
            std::cout << "ID: " << user.getId() << ", Name: " << user.getName() << "\n";
        }
    }

private:
    std::shared_ptr<UserService> userService;
};