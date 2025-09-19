#pragma once
#include <string>

//https://minecraft.wiki/w/Minecraft_Wiki:Projects/wiki.vg_merge/Protocol_version_numbers
enum ProtocolVersions
{
	v1_21_8 = 772,
	v1_21_6 = 771,
	v1_21_5 = 770,
	v1_21_4 = 769,
	v1_21_3 = 768
};

std::string GetProtocolVersionName(ProtocolVersions version);