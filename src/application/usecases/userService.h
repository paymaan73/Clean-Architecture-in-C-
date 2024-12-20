class UserService {
    public:
    explicit UserService(std::shared_ptr<IUserRepository> userRepo) : userRepo(std::move(userRepo)) {}

    void createUser(int id, const std::string& name) {
        User user(id, name);
        userRepo->addUser(user);
    }

    std::vector<User> listUsers() const {
        return userRepo->getUsers();
    }

    private:
    std::shared_ptr<IUserRepository> userRepo;
}