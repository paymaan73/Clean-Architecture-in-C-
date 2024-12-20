class CommentService {
public:
    explicit CommentService(std::shared_ptr<ICommentRepository> commentRepo) : commentRepo(std::move(commentRepo)) {}

    void createComment(int id, int userId, const std::string& text) {
        Comment comment(id, userId, text);
        commentRepo->addComment(comment);
    }

    std::vector<Comment> getUserComments(int userId) const {
        return commentRepo->getCommentsByUserId(userId);
    }

private:
    std::shared_ptr<ICommentRepository> commentRepo;
};