#pragma once

#include "../utils/fileutils.h"
#include "../math/math.h"
#include <GL/glew.h>
#include <vector>
#include <iostream>

namespace leopard { namespace graphics {

	class Shader
	{
	private:
		GLuint m_ShaderID;
		const char *m_VertPath, *m_FragPath;
	public:
		Shader(const char* vertPath, const char* fragPath);
		~Shader();


		void setUniform1f(const GLchar* name, const float value);
		void setUniform1i(const GLchar* name, const int value);
		void setUniform2f(const GLchar* name, const math::vec2& vector);
		void setUniform3f(const GLchar* name, const math::vec3& vector);
		void setUniform4f(const GLchar* name, const math::vec4& vector);

		void setUniformMat4(const GLchar* name, const math::mat4& matrix);

		void enable() const;
		void disable() const;
	private:
		GLint getUniformLocation(const GLchar* name);
		GLuint load();
	};
}
}