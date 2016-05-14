/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphObjectPickerViewController.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphObjectViewControllerDelegate.h>

@class NSString, NSTimer;

@interface FBPlacePickerViewController : FBGraphObjectPickerViewController <FBGraphObjectViewControllerDelegate> {

	char _hasSearchTextChangedSinceLastQuery;
	int _radiusInMeters;
	int _resultsLimit;
	NSString* _searchText;
	NSTimer* _searchTextChangedTimer;
	SCD_Struct_MN11 _locationCoordinate;

}

@property (nonatomic,retain) NSTimer * searchTextChangedTimer;                 //@synthesize searchTextChangedTimer=_searchTextChangedTimer - In the implementation block
@property (assign,nonatomic) SCD_Struct_MN11 locationCoordinate;               //@synthesize locationCoordinate=_locationCoordinate - In the implementation block
@property (assign,nonatomic) int radiusInMeters;                               //@synthesize radiusInMeters=_radiusInMeters - In the implementation block
@property (assign,nonatomic) int resultsLimit;                                 //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,copy) NSString * searchText;                              //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,retain,readonly) id<FBGraphPlace> selection; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestForPlacesSearchAtCoordinate:(SCD_Struct_MN11)arg1 radiusInMeters:(int)arg2 resultsLimit:(int)arg3 searchText:(id)arg4 fields:(id)arg5 datasource:(id)arg6 session:(id)arg7 ;
+(id)cacheDescriptorWithLocationCoordinate:(SCD_Struct_MN11)arg1 radiusInMeters:(int)arg2 searchText:(id)arg3 resultsLimit:(int)arg4 fieldsForRequest:(id)arg5 ;
+(unsigned)graphObjectPagingMode;
+(id)firstRenderLogString;
-(char)graphObjectTableDataSource:(id)arg1 filterIncludesItem:(id)arg2 ;
-(id)graphObjectTableDataSource:(id)arg1 pictureUrlOfItem:(id)arg2 ;
-(id)graphObjectTableDataSource:(id)arg1 subtitleOfItem:(id)arg2 ;
-(id)graphObjectTableDataSource:(id)arg1 titleOfItem:(id)arg2 ;
-(void)notifyDelegateDataDidChange;
-(void)notifyDelegateSelectionDidChange;
-(void)configureUsingCachedDescriptor:(id)arg1 ;
-(void)logAppEvents:(char)arg1 ;
-(void)loadDataThrottledSkippingRoundTripIfCached:(id)arg1 ;
-(void)configureDataSource:(id)arg1 ;
-(char)delegateIncludesGraphObject:(id)arg1 ;
-(void)loadDataSkippingRoundTripIfCached:(id)arg1 ;
-(void)initializePlacePicker;
-(void)setRadiusInMeters:(int)arg1 ;
-(int)radiusInMeters;
-(NSTimer *)searchTextChangedTimer;
-(id)createSearchTextChangedTimer;
-(void)setSearchTextChangedTimer:(NSTimer *)arg1 ;
-(void)searchTextChangedTimerFired:(id)arg1 ;
-(void)notifyDelegateOfError:(id)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<FBGraphPlace>)selection;
-(NSString *)searchText;
-(int)resultsLimit;
-(void)setResultsLimit:(int)arg1 ;
-(SCD_Struct_MN11)locationCoordinate;
-(void)setLocationCoordinate:(SCD_Struct_MN11)arg1 ;
@end

