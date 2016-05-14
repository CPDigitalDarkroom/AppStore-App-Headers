/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@class NSArray, NSMutableSet, NSByteCountFormatter, UIFont, FBRetainCycleAnalysisCache, NSString;

@interface FBMemoryProfilerDataSource : NSObject <UITableViewDataSource> {

	NSArray* _data;
	NSArray* _filtered;
	NSMutableSet* _expandedSection;
	NSByteCountFormatter* _byteCountFormatter;
	UIFont* _font;
	FBRetainCycleAnalysisCache* _analysisCache;
	NSString* _classFilter;
	unsigned _sortingMode;
	unsigned _sortingOrder;

}

@property (nonatomic,copy) NSString * classFilter;                  //@synthesize classFilter=_classFilter - In the implementation block
@property (assign,nonatomic) unsigned sortingMode;                  //@synthesize sortingMode=_sortingMode - In the implementation block
@property (assign,nonatomic) unsigned sortingOrder;                 //@synthesize sortingOrder=_sortingOrder - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)refilter;
-(char)isSectionExpanded:(int)arg1 ;
-(id)_colorForAnalysisStatus:(unsigned)arg1 ;
-(id)_sortArray:(id)arg1 withKey:(id)arg2 ;
-(id)_refilterSectionAtIndex:(int)arg1 ;
-(id)initWithAnalysisCache:(id)arg1 ;
-(void)setExpanded:(char)arg1 forSection:(int)arg2 ;
-(void)forceDataReload;
-(id)summaryForSection:(int)arg1 ;
-(void)setClassFilter:(NSString *)arg1 ;
-(void)setSortingOrder:(unsigned)arg1 ;
-(id)classNamesForSection:(int)arg1 ;
-(NSString *)classFilter;
-(unsigned)sortingOrder;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)setSortingMode:(unsigned)arg1 ;
-(unsigned)sortingMode;
@end

