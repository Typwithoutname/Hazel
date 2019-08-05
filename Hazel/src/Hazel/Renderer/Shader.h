#pragma once

#include <string>

namespace Hazel {

	class Shader
	{
	public:
		virtual ~Shader() = default;

		virtual void Bind() const = 0;
		virtual void Unbind() const = 0;

<<<<<<< HEAD
		static Shader* Create(const std::string& vertexScr, const std::string& fragmentScr);
	private:
		uint32_t m_RendererID;
=======
		static Shader* Create(const std::string& vertexSrc, const std::string& fragmentSrc);
>>>>>>> 3c147806f0b253e4a288b64e65a81948d63f112e
	};

}