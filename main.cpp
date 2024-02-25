#include <libtorrent/session.hpp>

int main(int argc, char* argv[])
{
	std::vector<std::shared_ptr<libtorrent::session>> sessions;

	for (int i = 0; i < 2000; i++)
	{
		printf("Session %d\n", i + 1);
		sessions.emplace_back(std::make_shared<libtorrent::session>());
	}

	return 0;
}

