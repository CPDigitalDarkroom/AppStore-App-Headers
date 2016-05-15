/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNForm.h>

@class NSArray, NSDictionary, TFNFormField, NSString;

@interface T1ReportProblemForm : TFNForm {

	NSArray* _confirmationSection;
	NSDictionary* _localizedCategoryToScribe;
	TFNFormField* _problemCategoryField;
	TFNFormField* _problemDescriptionField;
	unsigned _uploadSize;

}

@property (assign,nonatomic) unsigned uploadSize;                          //@synthesize uploadSize=_uploadSize - In the implementation block
@property (nonatomic,readonly) NSString * problemCategory; 
@property (nonatomic,readonly) NSString * problemDescription; 
-(unsigned)uploadSize;
-(void)setUploadSize:(unsigned)arg1 ;
-(NSString *)problemCategory;
-(NSString *)problemDescription;
-(id)problemCategoryField;
-(id)problemDescriptionField;
-(id)confirmationSection;
-(id)sections;
@end

