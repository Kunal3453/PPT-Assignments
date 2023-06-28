bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const Interval& i1, const Interval& i2) -> bool {
            return i1.start < i2.start;
        });
        
        for (size_t i = 1; i < intervals.size(); i++) {
            if (intervals[i - 1].end > intervals[i].start) {
                return false;
            }
        }
        
        return true;
    }