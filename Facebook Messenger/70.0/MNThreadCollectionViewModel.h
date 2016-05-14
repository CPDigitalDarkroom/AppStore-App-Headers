/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, MNCollectionViewLayoutConfiguration;

@interface MNThreadCollectionViewModel : FBValueObject <NSCopying> {

	char _shouldShowNames;
	NSString* _sectionHeader;
	NSArray* _actorsToDisplay;
	unsigned _collectionLayout;
	unsigned _suggestedActorsCount;
	MNCollectionViewLayoutConfiguration* _layoutConfiguration;
	float _verticalPadding;
	float _imageSize;

}

@property (nonatomic,copy,readonly) NSString * sectionHeader;                                               //@synthesize sectionHeader=_sectionHeader - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actorsToDisplay;                                              //@synthesize actorsToDisplay=_actorsToDisplay - In the implementation block
@property (nonatomic,readonly) unsigned collectionLayout;                                                   //@synthesize collectionLayout=_collectionLayout - In the implementation block
@property (nonatomic,readonly) char shouldShowNames;                                                        //@synthesize shouldShowNames=_shouldShowNames - In the implementation block
@property (nonatomic,readonly) unsigned suggestedActorsCount;                                               //@synthesize suggestedActorsCount=_suggestedActorsCount - In the implementation block
@property (nonatomic,copy,readonly) MNCollectionViewLayoutConfiguration * layoutConfiguration;              //@synthesize layoutConfiguration=_layoutConfiguration - In the implementation block
@property (nonatomic,readonly) float verticalPadding;                                                       //@synthesize verticalPadding=_verticalPadding - In the implementation block
@property (nonatomic,readonly) float imageSize;                                                             //@synthesize imageSize=_imageSize - In the implementation block
-(id)initWithSectionHeader:(id)arg1 actorsToDisplay:(id)arg2 collectionLayout:(unsigned)arg3 shouldShowNames:(char)arg4 suggestedActorsCount:(unsigned)arg5 layoutConfiguration:(id)arg6 verticalPadding:(float)arg7 imageSize:(float)arg8 ;
-(NSArray *)actorsToDisplay;
-(MNCollectionViewLayoutConfiguration *)layoutConfiguration;
-(char)shouldShowNames;
-(unsigned)suggestedActorsCount;
-(unsigned)collectionLayout;
-(float)imageSize;
-(NSString *)sectionHeader;
-(float)verticalPadding;
@end

