
#include <dyna_cpp/dyna/IncludePathKeyword.hpp>

namespace qd {

/** Constructor of an include dir keyword
 *
 * @param _lines
 * @param _iLine
 *
 * include dirs are dirs where an include may lie
 */
IncludePathKeyword::IncludePathKeyword(const std::vector<std::string> _lines,
                                       int64_t _iLine)
  : Keyword(_lines, _iLine)
{}

/** Get the include dir paths
 *
 * @return dir_filepaths
 */
std::vector<std::string>
IncludePathKeyword::get_include_dirs()
{
  std::vector<std::string> dir_filepaths;
  for (auto iLine = iCard_to_iLine(0, false); iLine < lines.size(); ++iLine) {
    auto line = trim_copy(lines[iLine]);

    // stop if an empty line is hit
    if (line.empty())
      break;

    dir_filepaths.push_back(line);
  }

  return dir_filepaths;
}

} // namespace:qd