/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMutableSortedSet, NSArray;

@interface FBMagicStoryCollectionCache : NSObject {

	FBMutableSortedSet* _sortedCollections;
	unsigned _maxItemCount;

}

@property (nonatomic,copy,readonly) NSArray * collections; 
-(char)addCollection:(id)arg1 ;
-(id)initWithComparator:(/*^block*/id)arg1 maxItemCount:(unsigned)arg2 ;
-(void)removeAllCollections;
-(NSArray *)collections;
@end

