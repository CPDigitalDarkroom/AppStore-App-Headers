/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@interface FBAccessStatistics : NSObject {

	mutex _accessMutex;
	vector<boost::accumulators::accumulator_set<double, boost::accumulators::features<boost::accumulators::tag::count, boost::accumulators::tag::sum, boost::accumulators::tag::mean, boost::accumulators::tag::max, boost::accumulators::tag::min, boost::accumulators::tag::variance, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void>, std::__1::allocator<boost::accumulators::accumulator_set<double, boost::accumulators::features<boost::accumulators::tag::count, boost::accumulators::tag::sum, boost::accumulators::tag::mean, boost::accumulators::tag::max, boost::accumulators::tag::min, boost::accumulators::tag::variance, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > >* _accumulators;
	vector<std::__1::unordered_map<NSString *, double, ObjcHash, ObjcEqual, std::__1::allocator<std::__1::pair<NSString *const, double> > >, std::__1::allocator<std::__1::unordered_map<NSString *, double, ObjcHash, ObjcEqual, std::__1::allocator<std::__1::pair<NSString *const, double> > > > >* _durations;
	char _active;
	unsigned _collectionLevel;
	double _startTime;
	double _endTime;

}
+(void)enableWithCollectionLevel:(unsigned)arg1 ;
+(id)sharedInstance;
-(id)markStartForEvent:(unsigned)arg1 ;
-(void)incrementForEvent:(unsigned)arg1 ;
-(void)stopCollection;
-(void)startCollection;
-(id)generateReport;
-(void)markStopForEvent:(unsigned)arg1 context:(id)arg2 ;
-(id)initWithCollectionLevel:(unsigned)arg1 ;
-(void)addDuration:(double)arg1 forEvent:(unsigned)arg2 identifierBlock:(/*^block*/id)arg3 ;
-(const vector<boost::accumulators::accumulator_set<double, boost::accumulators::features<boost::accumulators::tag::count, boost::accumulators::tag::sum, boost::accumulators::tag::mean, boost::accumulators::tag::max, boost::accumulators::tag::min, boost::accumulators::tag::variance, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void>, std::__1::allocator<boost::accumulators::accumulator_set<double, boost::accumulators::features<boost::accumulators::tag::count, boost::accumulators::tag::sum, boost::accumulators::tag::mean, boost::accumulators::tag::max, boost::accumulators::tag::min, boost::accumulators::tag::variance, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > >*)accumulators;
-(id)init;
-(double)duration;
@end

