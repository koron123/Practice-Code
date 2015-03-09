template <typename T>
class btree
{
public:
	typedef btree<T> tree;
	uint Data;
	tree* Left;
	tree* Right;
};