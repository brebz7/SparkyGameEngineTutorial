#include "src/graphics/window.h"
#include "src/maths/maths.h"


int main()
{
	using namespace sparky;
	using namespace graphics;
	using namespace maths;

	Window window("Sparky!", 960, 540);
	glClearColor(0.2f, 0.3f, 0.2f, 1.0f);

	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	vec4 a(1.0f, 2.0f, 5.0f, 1.0f);
	vec4 b(2.0f, 4.0f, 6.0f, 1.0f);

	vec4 c = a * b;
	mat4 position = mat4::translation(vec3(2, 3, 4));
	while (!window.closed())
	{
		window.clear();	
		std::cout << a + b << std::endl;

		glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
		window.update();
	}
	std::cin.get();
	return 0;
}