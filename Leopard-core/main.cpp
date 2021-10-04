#include "src/graphics/window.h"
#include "src/math/math.h"


int main()
{
	using namespace leopard;
	using namespace graphics;
	using namespace math;


	Window window("Leopard!", 960, 540);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	vec4 a(0.2f, 0.3f, 0.8f, 1.0f);
	vec4 b(0.5f, 0.2f, 0.1f, 1.0f);
	vec4 c = a + b;
	std::cout << a << std::endl;
	

	while (!window.closed())
	{
		window.clear();
		double x, y;
		window.getMousePosition(x, y);
		std::cout << "X: " << x << "Y: " << y << std::endl;
#if 0
		glBegin(GL_QUADS);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(-0.5f, 0.5f);
		glVertex2f(0.5f, 0.5f);
		glVertex2f(0.5f, -0.5f);
		glEnd();
#endif
		glDrawArrays(GL_ARRAY_BUFFER, 0, 6);
		window.update();
	}


	return 0;
}