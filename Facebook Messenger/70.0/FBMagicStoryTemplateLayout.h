/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBMagicStoryTemplateLayout : NSObject <NSCopying> {

	NSArray* _templates;

}

@property (nonatomic,copy) NSArray * templates;              //@synthesize templates=_templates - In the implementation block
+(id)templateLayoutWithCollection:(id)arg1 ;
+(id)templateLayoutWithOrderedDictionaryOfValidIndexPathsAndSizes:(id)arg1 ;
+(id)templateLayoutForAssets:(id)arg1 existingTemplates:(id)arg2 ;
-(NSArray *)templates;
-(id)initWithTemplates:(id)arg1 ;
-(id)templateForPhotoAtIndex:(unsigned)arg1 ;
-(id)templateLayoutWithInsertionAtIndex:(unsigned)arg1 isRowInsertion:(char)arg2 ;
-(id)templateLayoutWithRemovalAtIndex:(unsigned)arg1 ;
-(id)templateLayoutWithUpdatedCollection:(id)arg1 previousAssets:(id)arg2 ;
-(id)collectionByReorderingAssetsForLayout:(id)arg1 ;
-(void)setTemplates:(NSArray *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

