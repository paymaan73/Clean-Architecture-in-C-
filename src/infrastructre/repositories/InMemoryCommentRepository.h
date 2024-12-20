class InMemoryCommentRepository : public ICommentRepository {
public:
    void addComment(const Comment& comment) override {
        comments.push_back(comment);
    }

    std::vector<Comment> getCommentsByUserId(int userId) const override {
        std::vector<Comment> userComments;
        for (const auto& comment : comments) {
            if (comment.getUserId() == userId) {
                userComments.push_back(comment);
            }
        }
        return userComments;
    }

private:
    std::vector<Comment> comments;
};