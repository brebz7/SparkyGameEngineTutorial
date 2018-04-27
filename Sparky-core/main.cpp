#include "src/graphics/window.h"

int main()
{
	using namespace sparky;
	using namespace graphics;

	Window window("Sparky!", 960, 540);
	glClearColor(0.2f, 0.3f, 0.2f, 1.0f);

	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);


	while (!window.closed())
	{
		window.clear();
		double x, y;
		window.getMousePosition(x, y);
		std::cout << x << ", " << y << std::endl;

		glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
		window.update();
	}
	std::cin.get();
	return 0;
}