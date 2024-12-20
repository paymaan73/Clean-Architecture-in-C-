class Comment {
    public:
    Comment(int id, userId, const std::string& text) : id(id), userId(userId), text(text) {
        if(text.empty()) {
            throw std::invalid_argument("Comment text cannot be empty.");
        }
    }

    int getId() const { return id; }
    int getUserId() const { return userId; }
    std::string getText() const { return text; }


    private:
    int id;
    int userId;
    std::string text;
};
