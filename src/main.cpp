#include <iostream>
#include <string.h>
#include <zlib.h>

int main(void) {
    char buffer_in [256] = {"Lorem ipsum dolor sit amet, consectetur adipiscing elit."
                            "Integer quis lorem quis sem tincidunt ornare. Aliquam fringilla ligula nisi,"
                            "in accumsan nisl cursus nec. Maecenas tristique sit amet sapien ac condimentum. Vestibulum sagittis elit magna, in augue."};
    char buffer_out [256] = {0};

    z_stream defstream;
    defstream.zalloc = Z_NULL;
    defstream.zfree = Z_NULL;
    defstream.opaque = Z_NULL;
    defstream.avail_in = (uInt) strlen(buffer_in);
    defstream.next_in = (Bytef *) buffer_in;
    defstream.avail_out = (uInt) sizeof(buffer_out);
    defstream.next_out = (Bytef *) buffer_out;

    deflateInit(&defstream, Z_BEST_COMPRESSION);
    deflate(&defstream, Z_FINISH);
    deflateEnd(&defstream);

	std::cout << "Uncompressed size is: " << strlen(buffer_in) << std::endl;
	std::cout << "Compressed size is: " << strlen(buffer_out) << std::endl;

	std::cout << "ZLIB VERSION: " << zlibVersion() << std::endl;

    return EXIT_SUCCESS;
}
