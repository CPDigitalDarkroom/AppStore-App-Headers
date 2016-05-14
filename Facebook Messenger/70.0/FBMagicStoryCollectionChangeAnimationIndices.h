/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBMagicStoryCollectionChangeAnimationIndices : FBValueObject <NSCopying> {

	NSArray* _indexPathsToInsert;
	NSArray* _indexPathsToDelete;
	NSArray* _indexPathsToMove;

}

@property (nonatomic,copy,readonly) NSArray * indexPathsToInsert;              //@synthesize indexPathsToInsert=_indexPathsToInsert - In the implementation block
@property (nonatomic,copy,readonly) NSArray * indexPathsToDelete;              //@synthesize indexPathsToDelete=_indexPathsToDelete - In the implementation block
@property (nonatomic,copy,readonly) NSArray * indexPathsToMove;                //@synthesize indexPathsToMove=_indexPathsToMove - In the implementation block
-(id)initWithIndexPathsToInsert:(id)arg1 indexPathsToDelete:(id)arg2 indexPathsToMove:(id)arg3 ;
-(NSArray *)indexPathsToInsert;
-(NSArray *)indexPathsToDelete;
-(NSArray *)indexPathsToMove;
@end

