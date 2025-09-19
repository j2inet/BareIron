#include "protocol.hpp"

#include <map>


std::map<ProtocolVersions, std::string> VersionNameMap = {
	{ProtocolVersions::v1_21_3, "v1.21.3"},
	{ProtocolVersions::v1_21_4, "v1.21.4"},
	{ProtocolVersions::v1_21_5, "v1.21.5"},
	{ProtocolVersions::v1_21_6, "v1.21.6"},
	{ProtocolVersions::v1_21_8, "v1.21.8"}
};

std::string GetProtocolVersionName(ProtocolVersions version)
{
	auto match = VersionNameMap.find(version);
	if (match == VersionNameMap.end())
	{
		return "unknown protocol";
	}
	return match->second;
}